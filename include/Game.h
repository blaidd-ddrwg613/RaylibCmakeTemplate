#pragma once

#include "raylib.h"
#include "cstdint"
#include "string"

#define MYPURPLE { 52, 8, 97, 255}

class Game
{
public:
    Game(int width, int height, const char* title);
    void RunLoop();
    void Shutdown();

    float deltaTime;

private:
    void Init();
    void ProcessInput();
    void UpdateGame();
    void GenerateOutput();

    int wWidth;
    int wHeight;
    std::string wTitle;
};