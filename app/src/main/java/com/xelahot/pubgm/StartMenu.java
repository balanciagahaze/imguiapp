package com.xelahot.pubgm;

import android.app.Activity;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.widget.Toast;

public class StartMenu extends Activity {

    public String GameActivity = "com.dts.freefireth.FFMainActivity";

    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
		//stopService(new Intent(this, MLoader.class));
        //Launcher.Start(this);
        //Launcher.StartWithoutPermission(this);
		Launcher.Init(this);
    }
}
