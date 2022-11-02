// header files
#include <vector>

#include "player.h" // <string>

class Team {
	public:
	std::string name;
	int wicketsLost;
	int totalRunsScored;
	int totalBallsBowled;
	std::vector<Player> players;

	Team();
};
