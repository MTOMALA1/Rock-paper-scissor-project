#include <iostream>
#include <string>
#include "RPS.h"




using namespace std;
int a = 0; // wins
int b = 0; //  losses 
int c = 0; // ties
int e = 0; // rounds 



void Menu(const string& choice) // Menu is displaying what the players choices are 
{
	if (choice == "Rock")
	{
		cout << "Your choice was Rock \n";
		
	}
	else if (choice == "Paper")
	{
		cout << "Your choice was Paper \n";
		
	}
	else if (choice == "Scissors")
	{
		cout << "Your choice was Scissors \n";
		
	}
	
	
		
	
	else
	{
		cout << "That's invalid, Try again \n";
	}
}

string ToString(int choice) // ToString is converting the Bots choices into "Rock" or "Paper" 
{
	if (choice == 1)
		return "Rock";

	if (choice == 2)
		return "Paper";

	if (choice == 3)
		return "Scissors";

	

}

int ComputerChoice() // Making the bot randomly choose an option
{
	int Botchoice = rand() % 3 + 1;
	return Botchoice;
}
int PlayerChoice(const string& choice)  // is doing the opposite of To String where it is taking those exact values and making them numbers for
// the function to read 
{
	if (choice == "Rock")
		return 1;

	if (choice == "Paper")
		return 2;

	if (choice == "Scissors")
		return 3;
}
void Round(int player, int bot) // this is how the game is played and after every round there will be a display of the game summary 
{
	
	
	if (player == bot)
	{
		cout << "Tie!\n";
		c++;
		e++;
		
	}
	else if (
		(player == 1 && bot == 3) || 
		(player == 2 && bot == 1) ||  
		(player == 3 && bot == 2)     
		)
	{
		cout << "You win!\n";
		a++;
		e++;
		
		
	}
	else
	{
		cout << "Bot wins!\n";
		b++;
		e++;
		
	}
	cout << "You: " << a << " wins\n";
	cout << "Bot: " << b << " wins\n";
	cout << "Ties: " << c << "\n";
	cout << "Rounds: " << e << "\n";
}

void Summary(int a, int b, int c, int e) // this is to display EVERYTHING when the game is done  
{
	cout << "GAME SUMMARY \n";
	if (e == 1) 
	{
		cout << "You have played a total of " << e << " round \n";
	}
	else cout << "You have played a total of " << e << " rounds \n";	
	if (a == 1)
	{
		cout << "You have won: " << a << " time \n";
	}
	else cout << "You have won: " << a << " times \n";
	if (b == 1)
	{
		cout << "Bot has won: " << b << " time \n";
	}
	else cout << "Bot has won: " << b << " times \n";
	if (c == 1)
	{
		cout << "You have tied: " << c << " time \n";
	}
	else cout << "You have tied: " << c << " times \n";
	if (a == b)
		cout << "Its a draw, Nobody wins. \n";
	else if (a > b)
		cout << "YOU ARE THE WINNER! \n";
	else 
		cout << "BOT IS THE WINNER! \n";
}