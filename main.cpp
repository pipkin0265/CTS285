#include <iostream>

using namespace std;

/*
CTS 285
Project 1 - Destin Text Adventure
Michael Pipkin II
Last Updated 10/11/21

The goal is to fight and defeat the Champion
*/

// Rooms
void Tower();       // Base
void TheChampionsZone();
void TheChampionCity();
void TheTwilightGap();
void TheChampionZone();

bool playNow = true;
bool hasKey = false;        // Does player have key to enter TheChampionsZone

int main()
{
  char playAgian;
  cout << "Welcome guardian!" << endl;
  if(playNow){
    cout << "Are you ready to fight your way through darkness? (Y/N)";
  }
  else{
    cout << "Would you like to play again champion? (Y/N)";
  }
  cin >> playAgian;
  if(playAgian == 'y' || playAgian == 'Y'){
    // start in base
    Tower();
    playNow = false;

    main();
  }
  else{
    cout << "Goodbye guardian!" << endl;
  }

  return 0;
}