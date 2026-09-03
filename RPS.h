

#include <string>
using namespace std;

void Menu(const string& choice); // will display what the player chooses 
extern int a; // wins
extern int b; // losses
extern int c;// ties 

int ComputerChoice(); // How the computer gets its number
int PlayerChoice(const string& choice); // how player inputs their choice
void Round(int player, int bot); // the game itself
 void Summary(int a, int b, int c); // Game summary 
string ToString(int choice); // converter 

