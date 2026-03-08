#include "common.h"

// Minesweeper Header
#include "minesweeper.h"

using namespace std;

string gamename = "Minesweeper";
int mines = 25;

extern "C" {
	#include "logiciel.h"
}

int main()
{
	// Initialize Random Engine
	mt19937 rng(std::random_device{}());

	Game& game = Game::get_instance();
	game.init(45, 16, 10);

	while (true) {

		if (is_key_pressed()) {
			say_hi(gamename);
			break;
		}
	}

	game.start();

	return 0;
}