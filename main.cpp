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
  int in2 = 0;
  string username;

  cout << "\nWelcome to this program!\n"
  "Please input a username to continue! ";
  cin >> username;

  cout << "\nWelcome to the program menu!";

do 
  {
  cout << " Please type an integer 1-3 \n"
  "[1] Print \"Hello {user}!\" \n"
  "[2] Count down from a number\n"
  "[3] Close Menu and Exit Program\n";
  cin >> input;

  if (input == 1)
    {
      cout << "\nHello " << username <<"!" << endl << endl;
    }
  else if (input == 2)
    {
    cout << "\nInsert a number to countdown from! ";
    cin >> in2;
      for (int cd = in2; cd >= 0; cd = cd - 1 )
        {
          cout << cd << endl;
        }

    }
  else if (input == 3);
  
  else
    {
    cout << "\nInvalid Input!";
    }


}
while (input != 3);
{
  cout << "The Menu is now closed and the Program has ended!";
}

  return 0;
}
