 
/*
* Marcos T 9/3/206 Rock Paper Scissors Project.
*
* This is rock paper scissors where the player has to type its answer and a bot will ranomly be given an opposing answer to see who wins. 
* You can play as many times as you like with a tracker keeping score of your wins, losses, draws, and the amount of rounds you played.
*/ 
#include <iostream>
#include <string>
#include "RPS.h"

using namespace std;

string choice; // this is where you enter rock paper or scissor 
char playagain = 'y'; // how the game loops 


int main()
{
	srand(time(0)); // allows for not the same sequence of random

	while (playagain == 'y' || playagain == 'Y') // will keep playing till player chooses not to
	{
		cout << "Enter Rock, Paper, Scissors, Quit ( First letter captial ) \n";
		cin >> choice;
		 
		if (choice == "Rock" || choice == "Paper" || choice == "Scissors")
		{
			
			Menu(choice); // displaying your choice 
			int player = PlayerChoice(choice);  // converting your choice 

			int bot = ComputerChoice(); // randomly generating bots choice
			cout << "Bot chose: " << ToString(bot) << "\n"; // displaying bots choice

			
			
			Round(player, bot); // the game itself 
			


			cout << "Play again? (y/n): "; 
			cin >> playagain;
			
		}
		else if (choice == "Quit")
		{
			return 0;
		}
		else 
		{
			Menu(choice); // will display if you choose incorrectly 
		}

	}
	cout << "\n";
	Summary(a, b, c, e); // taking wins loses and ties and putting them into a summary 

	return 0;

   
	
   
}

