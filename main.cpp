#include "raylib.h"
#include <iostream>
using namespace std;
int main(){
    cout<<"Welcome to SquareGame 1.2"<<endl;
    InitWindow(1300,1000,"SquareGame 1.2 (C++ Runtime)");
    SetTargetFPS(60);
    float x=650;
    float y=450;
    float speed=5.0f;
    while (!WindowShouldClose()){
        if (IsKeyDown(KEY_A)) x-=speed;
        if (IsKeyDown(KEY_D)) x+=speed;
        if (IsKeyDown(KEY_W)) y-=speed;
        if (IsKeyDown(KEY_S)) y+=speed;
        if (IsKeyDown(KEY_LEFT)) x-=speed;
        if (IsKeyDown(KEY_RIGHT)) x+=speed;
        if (IsKeyDown(KEY_UP)) y-=speed;
        if (IsKeyDown(KEY_DOWN)) y+=speed;
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawRectangle(x,y,150,150,GRAY);
        DrawText("SQUARE",x,y,35,BLACK);
        DrawText("SquareGame 1.2",500,150,50,BLACK);
        DrawText("C++ Runtime",500,850,50,BLACK);
        DrawText("MBU1",15,15,40,BLACK);
        DrawText("WDRC++",15,60,40,BLACK);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}