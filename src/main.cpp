#include "Game.h"

int main(void)
{

    Game game = *new Game(1080, 720, "Raylib Testing");
    game.RunLoop();

	return 0;
}