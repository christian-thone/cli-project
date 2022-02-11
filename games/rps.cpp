#include <iostream>
#include "rps.h"
#include <string>

using namespace std;

int doubleNewLines() {
  cout << "\n" << endl;
  cout << "\n" << endl;
  return 0;
}

int rockPaperScissors()
{
  string input;
  string choices[3] = {"r", "p", "s"};
  doubleNewLines();

  cout << "Rock! Paper! Scissors!" << endl;
  cout << "Choose one letter as your play option." << endl;
  cout << "It can only be 'r', 'p', or 's'" << endl;

  while (!(input == "--exit"))
  {
    cout << "> ";
    getline(cin, input);
    /* if (input == "--exit")
      cout << "Exiting.." << endl;
      exit(0); */
      doubleNewLines();
    cout << "You chose " + input << endl;

    int randomIndex;
    randomIndex = rand() % 4;
    string aiChoice;
    aiChoice = choices[randomIndex];

    cout << "AI Chose: " + aiChoice << endl;

    if (aiChoice == "r")
    {
      if (input == "r")
      {
        cout << "Oh! You both chose the same thing" << endl;
      }
      else if (input == "s")
      {
        cout << "You lost! Rock beats Scissors!" << endl;
      }
      else if (input == "p")
      {
        cout << "You win! Paper beats Rock!" << endl;
      }
    }
    else if (aiChoice == "p")
    {
      if (input == "p")
      {
        cout << "Oh! You both chose the same thing" << endl;
      }
      else if (input == "r")
      {
        cout << "You lost! Paper beats Rock!" << endl;
      }
      else if (input == "s")
      {
        cout << "You win! Scissors beats Paper" << endl;
      }
    }
    else if (aiChoice == "s")
    {
      if (input == "s")
      {
        cout << "Oh! You both chose the same thing" << endl;
      }
      else if (input == "r")
      {
        cout << "You lost! Rock beats Scissors!" << endl;
      }
      else if (input == "p")
      {
        cout << "You win! Scissors beats Paper" << endl;
      }
    }

    doubleNewLines();
  }

  return 0;
}