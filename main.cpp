#include <iostream>
#include "raylib.h"
#include <cmath>
using namespace std;
int main() {
    // פתיחת חלון בגודל 800x600
    InitWindow(800, 600, "Physics Engine Test");
    SetTargetFPS(60);

    // לולאת המשחק/המנוע שתרוץ כל פריים
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Raylib is working!", 300, 280, 20, DARKGRAY);

        EndDrawing();
    }

    // סגירה נקייה
    CloseWindow();
    return 0;
}