package com.ebert.myapplication;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void buttonOnClick(View v) {
        Button button = (Button) v;
        ((Button) v).setText("Please wait...");
    }
}
// estados dos botoes
// clickado, clickando ....
// REACT NATIVE *
// CICLOS DE VIDA DAS ACTIVITIES(TELA)
