#include <iostream>
#include "gtn.h"

#include <string>

using namespace std;

string collectInputWCheck(string chosenNumber = "none") {
  cout << chosenNumber << endl;
  if (chosenNumber == "none") {
    chosenNumber = to_string(1+(rand() % 100));
  }

  return "0";
}

int guessTheNumber() {
  cout << "Guess The Number!" << endl;
  string chosenNumber;
  chosenNumber = "none";
  cout << "Choose any number between 1-100" << endl;
  cout << chosenNumber << endl;
  string input;
  cout << "> ";
  getline(cin, input);

  cout << input << endl;
  if (input == chosenNumber) {
    cout << "Wow! You got it first try!" << endl;
  }
  return 0;
}

int guessTheNumberLooped() {
  cout << "Guess The Number!" << endl;
  string chosenNumber;
  chosenNumber = "none";
  cout << "Choose any number between 1-100" << endl;
  cout << chosenNumber << endl;

  // Start loop so player can keep guessing.
}