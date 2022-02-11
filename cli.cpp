#include <iostream>
#include "./games/rps.h"
#include <string>

using namespace std;

int main()
{
  const string games[2] = {
      "Rock Paper Scissors (rps)",
      "Random Game"
  };

  cout << "Welcome to C++ Games!\n"
       << endl;
  cout << "Choose one of the following games:" << endl;

  for (int i = 0; i < 2; i++)
  {
    if (i > 2)
      break;
    cout << games[i] << endl;
  }

  cout << "\n"
       << endl;

  // Collectin user input.
  string input = "";
  cout << "> ";
  getline(cin, input);

  // Checking user input

  if (input == "--exit" || input == "--e")
  {
    cout << "Exiting..." << endl;
    exit(0);
  }
  else
  {
    if (input == "rps" || input == "rock paper scissors")
    {
      rockPaperScissors();
    }
  }

  return 0;
}