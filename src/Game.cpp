#include "Game.h"

#include <utility>

Game::Game(int width, int height, const char* title)
{
    wWidth = width;
    wHeight = height;
    wTitle = title;
    deltaTime = 0.0f;

    Init();
};

void Game::Init()
{
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(wWidth, wHeight, wTitle.c_str());
}

void Game::RunLoop()
{
    while (!WindowShouldClose())
    {
        ProcessInput();
        UpdateGame();
        GenerateOutput();
    }
}

void Game::ProcessInput()
{

}

void Game::UpdateGame()
{
    deltaTime = GetFrameTime();

    if (deltaTime > 0.05f)
    {
        deltaTime = 0.05f;
    }
}

void Game::GenerateOutput()
{
    wWidth = GetScreenWidth();
    wHeight = GetScreenHeight();

    BeginDrawing();
    ClearBackground(MYPURPLE);

    const char* text = "Congrats! You created your first window!";
    int textSize = MeasureText(text, 20);

    DrawText(text,(wWidth / 2) - (textSize / 2), (wHeight / 2), 20, LIGHTGRAY);

    EndDrawing();
}

void Game::Shutdown()
{
    CloseWindow();
}