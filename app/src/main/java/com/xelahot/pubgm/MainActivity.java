package com.xelahot.pubgm;

import android.annotation.SuppressLint;
import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.graphics.PixelFormat;
import android.graphics.Point;
import android.os.Build;
import android.os.IBinder;
import android.view.Gravity;
import android.view.MotionEvent;
import android.view.View;
import android.view.WindowManager;
import com.xelahot.pubgm.GLES3JNIView;
import java.io.InputStream;
import android.view.WindowManager.LayoutParams;
import android.os.Handler;
import android.os.Bundle;

import android.app.ActivityManager;
import android.app.ActivityManager.RunningAppProcessInfo;

public class MainActivity {

	//@SuppressLint("StaticFieldLeak")

	private WindowManager.LayoutParams vParams;
	private View vTouch;
	private WindowManager DrawWindow;

    private WindowManager manager;

	Context getContext;

	public MainActivity(Context context) {

		getContext = context;
		//Thread();


		DrawWindow = ((Activity) getContext).getWindowManager();
		manager = ((Activity) getContext).getWindowManager();
		vParams = getAttributes(false);
        WindowManager.LayoutParams wParams = getAttributes(true);
        GLES3JNIView display = new GLES3JNIView(context);
		vTouch = new View(context);
        manager.addView(vTouch, vParams);
        manager.addView(display, wParams);


        vTouch.setOnTouchListener(new View.OnTouchListener() {
				@Override
				public boolean onTouch(View v, MotionEvent event) {
					int action = event.getAction();
					switch (action) {
						case MotionEvent.ACTION_MOVE:
						case MotionEvent.ACTION_DOWN:
						case MotionEvent.ACTION_UP:
							GLES3JNIView.MotionEventClick(action != MotionEvent.ACTION_UP, event.getRawX(), event.getRawY());
							break;
						default:
							break;
					}
					return false;
				}
			});
        final Handler handler = new Handler();
        handler.postDelayed(new Runnable() {
				@Override
				public void run() {
					try {
						String rect[] = GLES3JNIView.getWindowRect().split("\\|");
						vParams.x = Integer.parseInt(rect[0]);
						vParams.y = Integer.parseInt(rect[1]);
						vParams.width = Integer.parseInt(rect[2]);
						vParams.height = Integer.parseInt(rect[3]);
						manager.updateViewLayout(vTouch, vParams);
					} catch (Exception e) {
					}
					handler.postDelayed(this, 20);
				}
			}, 20);

	}

	private WindowManager.LayoutParams getAttributes(boolean isWindow) {
        WindowManager.LayoutParams params = new WindowManager.LayoutParams();
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            params.type = WindowManager.LayoutParams.TYPE_APPLICATION;
        } else {
            params.type = WindowManager.LayoutParams.TYPE_PHONE;
        }
        params.flags = WindowManager.LayoutParams.FLAG_FULLSCREEN | WindowManager.LayoutParams.FLAG_TRANSLUCENT_STATUS | WindowManager.LayoutParams.FLAG_TRANSLUCENT_NAVIGATION | WindowManager.LayoutParams.FLAG_NOT_FOCUSABLE;

        if (isWindow) {
            params.flags |= WindowManager.LayoutParams.FLAG_NOT_TOUCH_MODAL | WindowManager.LayoutParams.FLAG_NOT_TOUCHABLE;
        }
        params.format = PixelFormat.RGBA_8888;
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.P) {
            params.layoutInDisplayCutoutMode = WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES;
        }
        params.gravity = Gravity.LEFT | Gravity.TOP;
        params.x = params.y = 0;
        params.width = params.height = isWindow ? WindowManager.LayoutParams.MATCH_PARENT : 0;
        return params;
    }

	/*public void onDestroy() {
        if (vTouch != null) {
            manager.removeView(vTouch);
        }
    }*/

}

