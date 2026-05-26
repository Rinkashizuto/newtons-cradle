#include "raylib.h"

const int WIDTH = 800;
const int HEIGHT = 800;
const int FPS = 60;

int main(){ 

    InitWindow(WIDTH,HEIGHT, "CRADLE");

    SetTargetFPS(FPS);

    while(!WindowShouldClose()){

        BeginDrawing();

        ClearBackground(BLACK);

        EndDrawing();
    }

    CloseWindow();

}