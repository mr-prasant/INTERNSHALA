//============================================================================
// Name        : Gully.cpp
// Author      : prasant.cp
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// Declaration of libraries
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

// Declaration of global variables
string currentBatsman;
string currentBowler;

// Declaration of the class
class Team
{
public:
	string teamName;
	string players[3];
	int score = 0;

	Team(string teamName, string players[3])
	{
		this->teamName = teamName;

		for (int i = 0; i < 3; i++)
		{
			this->players[i] = players[i];
		}
	}
};

/* Greet users with a welcome message */
void welcomeUsers()
{
	cout << "----------------------------------------------------------" << endl;
	cout << "|===================== GULLY-CRICKET ====================|" << endl;
	cout << "|                                                        |" << endl;
	cout << "|             Welcome to our GULLY CRICKET..!            |" << endl;
	cout << "----------------------------------------------------------" << endl;
}

/* Display all the players in both team A and team B */
void displayPlayers(string playersA[3], string playersB[3])
{
	cout << "--------------------------\t--------------------------" << endl;
	cout << "|=======  Team-A  =======|\t|=======  Team-B  =======|" << endl;
	cout << "--------------------------\t--------------------------" << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << "|\t"
			 << "[" << i << "] " << playersA[i] << "\t |"
			 << "\t"
			 << "|\t"
			 << "[" << i << "] " << playersB[i] << "\t |" << endl;
	}
	cout << "--------------------------\t--------------------------" << endl
		 << endl;
}

/* Select randomly a batsman and bowler from the batting team and bowler team respectively for a inning */
void selectBatsmanAndBowler(Team batTeam, Team ballTeam)
{
	srand(time(NULL));
	int random = 1 + rand() % 3;
	currentBatsman = batTeam.players[random - 1];

	random = 1 + rand() % 3;
	currentBowler = ballTeam.players[random - 1];
}

/* Start inning by displaying initial inning details */
void startInning(int inning, string batTeam, string ballTeam)
{
	cout << "Innings " << inning << endl;
	cout << "==========================================================" << endl;

	sleep(1);
	cout << "Batting: \t " << batTeam << "\t\t Bowling: \t " << ballTeam << endl;

	sleep(3);
	cout << "Current Batsman: " << currentBatsman << endl
		 << "Current Bowler:  " << currentBowler << endl
		 << endl;
}

/* Play one inning (6 balls) */
int playInning()
{
	sleep(4);
	srand(time(NULL));
	int runs = 0;
	cout << "Ball \t \t"
		 << "Runs" << endl;
	for (int i = 0; i < 6; i++)
	{
		int run = rand() % 7;
		cout << i + 1 << "\t \t" << run << endl;
		runs += run;
		sleep(2);
	}

	return runs;
}

/* Display runs scored by batting team in the inning */
void displayScore(Team team)
{
	cout << "Total Runs scored by " << team.teamName << ": \t" << team.score << "\n\n"
		 << endl;
}

/* Decide winner by comparing final scores of both the teams */
void decideWinner(Team teamA, Team teamB)
{
	if (teamA.score > teamB.score)
	{

		cout << "\n==========================================================" << endl;
		cout << "Team A wins!" << endl;
		cout << "========================================================== \n"
			 << endl;
	}
	else if (teamA.score < teamB.score)
	{

		cout << "\n==========================================================" << endl;
		cout << "Team B wins!!" << endl;
		cout << "========================================================== \n"
			 << endl;
	}
	else
	{

		cout << "\n==========================================================" << endl;
		cout << "Match Tied!" << endl;
		cout << "========================================================== \n"
			 << endl;
	}
}

int main()
{
	string batsman[3] = {"MS Dhoni", "R. Jadeja", "J. Bumrah"};
	string bowler[3] = {"V. Kohli", "Y. Singh", "H. Pandya"};

	Team batTeam("Team A", batsman);
	Team ballTeam("Team B", bowler);

	welcomeUsers();
	sleep(1);
	displayPlayers(batTeam.players, ballTeam.players);

	sleep(2);

	cout << "\n========================================================== \n"
		 << endl;
	cout << "Starting Match..." << endl;
	cout << "========================================================== \n"
		 << endl;

	// First innings
	sleep(3);
	int inning = 1;
	selectBatsmanAndBowler(batTeam, ballTeam);

	startInning(inning, batTeam.teamName, ballTeam.teamName);
	batTeam.score = playInning();
	displayScore(batTeam);

	sleep(3);
	// Second Innings
	inning++;
	selectBatsmanAndBowler(ballTeam, batTeam);

	sleep(2);
	startInning(inning, ballTeam.teamName, batTeam.teamName);
	ballTeam.score = playInning();
	displayScore(ballTeam);

	cout << "==========================================================" << endl;
	cout << "End of Second Innnings!" << endl;
	cout << "========================================================== \n"
		 << endl;

	sleep(3);
	// Deciding the results
	decideWinner(batTeam, ballTeam);

	return 0;
}
