#include <iostream>
#include "FizzBuzz.h"
#include "Collatz.h"
#include "IsPrime.h"
using namespace std;

//Menu like interface on the command line to access the different programs
int main(void){

	enum MenuResult {Quit, FizzBuzzProgram, CollatzProgram, PrimeProgram};
	MenuResult menuResult;
	int menuItem;
	int choice;

	while (true){
		cout << "Welcome to my random program! Here I just experiment with different programming problems"
			<< " which you can access using the menu commands." << endl << endl;
		cout <<"Enter '0' to quit\n";
		cout << "Enter '1' for FizzBuzz (Since I can solve this, any company should hire me :D)\n";
		cout << "Enter '2'for Collatz Program\n";
		cout << "Enter '3' for a Prime Number Checker\n";
		cout << endl;
		cout << "Your entry: ";
		cin >> menuItem;
		cout << endl;

		if (menuItem == 0) menuResult = Quit;
		else if (menuItem == 1) menuResult = FizzBuzzProgram;
		else if (menuItem == 2) menuResult = CollatzProgram;
		else if (menuItem == 3) menuResult = PrimeProgram;

		switch (menuResult)
		{
		case Quit:
			exit(1);
		case FizzBuzzProgram:
			FizzBuzz fizzBuzz;
			fizzBuzz.Start();
			break;
		case CollatzProgram:
			Collatz collatz;
			collatz.Start();
			break;
		case PrimeProgram:
			Prime prime;
			prime.Start();
			break;
		default:
			cout << "Invalid command, please try again.";
			break;
		}

		cout << endl;
		cout << "Press 1 to return to the main menu, or 0 to quit: ";
		cin >> choice;
		if (!choice) {
			exit(1);
		} else {
			system("CLS");
		}

	}
	return 0;
}