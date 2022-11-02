// header files
#include <iostream>
#include <ctime>
#include <limits>
#include <cstdlib>
#include <unistd.h>

#include "team.h"  // <string> <vector> "player.h"

class Game {
	public:
	int playersPerTeam;
	int maxBalls;
	int totalPlayers;
	std::string players[11];

	bool isFirstInning;
	Team teamA, teamB;
	Player *batsman, *bowler;
	Team *battingTeam, *bowlingTeam;

	// methods
	Game();
	void welcome();
	void showAllPlayers();
	int takeIntegerInput();

	void selectPlayers();
	bool validateSelectedPlayer(int);
	void showTeamPlayers();

	void toss();
	void tossChoice(Team);

	void startFirstInnings();
	void startSecondInnings();
	void initializePlayers();
	void playInnings();

	void bat();
	bool validateInningsScore();
	void showGameScorecard();
	void showMatchSummary();
};
