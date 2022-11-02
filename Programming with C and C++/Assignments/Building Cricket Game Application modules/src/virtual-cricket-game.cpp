// header files
#include "game.h"

using namespace std;

void enter(string work) {
	cout << "\nPress Enter to " << work;
	fflush(stdout);
	getchar();
}

int main() {
	Game game;
	game.welcome();

	enter("continue");
	game.showAllPlayers();

	enter("continue");
	game.selectPlayers();

	game.showTeamPlayers();

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	enter("toss");
	game.toss();
    game.startFirstInnings();
    game.startSecondInnings();

    game.showMatchSummary();

	return 0;
}
