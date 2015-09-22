#include "Game1.h"
#include <crtdbg.h>

int main(int argc, char **argv)
{
	_CrtSetDbgFlag ( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF );

	Game1 *pGame = new Game1(1232, 878, false, "Game1");
	pGame->RunGame();
	delete pGame;

	return 0;
};