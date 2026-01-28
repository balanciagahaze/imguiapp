package com.xelahot.pubgm;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.provider.Settings;

@SuppressWarnings("all")
public class Launcher {

    static {
        try {
            System.loadLibrary("Xelahot-Cheat");
        } catch (UnsatisfiedLinkError e) {
            e.printStackTrace();
        }
    }

    public static void Init(Object object) {
        final Context m_Context = (Context) object;
        Activity m_Activity = (Activity) object;

        // Try to initialize native code
        try {
            Init(m_Context);
        } catch (UnsatisfiedLinkError e) {
            android.widget.Toast.makeText(m_Context, "Error: Native library not loaded (Architecture mismatch?)",
                    android.widget.Toast.LENGTH_LONG).show();
            // Continue anyway to show at least something, or return?
            // Let's continue, maybe Java part works.
        }

        // Request overlay permission if needed
        if (Build.VERSION.SDK_INT >= 23) {
            if (!Settings.canDrawOverlays(m_Context)) {
                Intent intent = new Intent(Settings.ACTION_MANAGE_OVERLAY_PERMISSION,
                        Uri.parse("package:" + m_Context.getPackageName()));
                m_Activity.startActivity(intent);
            }
        }

        // Directly launch the menu without key verification
        MainActivity menu = new MainActivity(m_Context);
    }

    private static native void Init(Context mContext);
}
