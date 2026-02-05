#include<stdio.h>
#include "raylib.h"

int main(void)
{
    InitWindow(800, 450, "test window");

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Lets fukin go", 190, 200, 20, DARKGRAY);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
