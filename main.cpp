#include <iostream>
#include <string>

// Homework 6 — Tristan Daliva
// CIS 5 Week 06 · Menu

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main(){ 

  int n = 0;
  int input = 0;
  string username;


do 
  {
  cout << " Please type an integer 1-3 \n"
  "[1] Print \"hello user!\" \n"
  "[2] Count down from a number\n"
  "[3] Exit the program\n";
  cin >> input;

  if (input == 1)
    {
      cout << "Hello!" << endl;
    }
  else if (input == 2)
    {
    cout << "Insert a number to countdown from!" << endl;
    }
  else if (input == 3);
  
  else
    {
    cout << "Input Valid Statement!";
    }


}
while (input != 3);
{
  cout << "You have exited the program!";
}

  return 0;
}
