#include <iostream>
#include "./games/rps.h"
#include <string>

using namespace std;

int main() {
  const string games[4] = {
    "Rock Paper Scissors (rps)",
    "Guess the Number (gtn)",
    "Guess the Word (gtw)",
    "Unallocated (exit)"
  };

  cout << "Welcome to C++ Games!\n" << endl;
  cout << "Choose one of the following games:" << endl;

  for (int i = 0; i < games->size(); i++) {
    if (i > 3) break;
    cout << games[i] << endl;
  }

  cout << "\n" << endl;

  // Collectin user input.
  string input = "";
  cout << "> ";
  getline(cin, input);

  // Checking user input

  if (input == "--exit" || input == "--e")
     {cout << "Exiting..." << endl; exit( 0 );} else {
    if (input == "rps" || input == "rock paper scissors")
    {
      rockPaperScissors();
    }
  }

}