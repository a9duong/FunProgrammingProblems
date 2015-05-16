#include <iostream>
#include "FizzBuzz.h"
#include "Collatz.h"
using namespace std;

//Menu like interface on the command line to access the different programs
int main(void){

	enum MenuResult {Quit, FizzBuzzProgram, CollatzProgram};
	MenuResult menuResult;
	int menuItem;
	int choice;

	while (true){
		cout << "Welcome to my random program! Here I just experiment with different programming problems"
			<< " which you can access using the menu commands" << endl << endl;
		cout <<"Enter '0' to quit\n";
		cout << "Enter '1' for FizzBuzz\n";
		cout << "Enter '2'for Collatz Program\n";
		cout << endl;
		cout << "Your entry: ";
		cin >> menuItem;
		cout << endl;

		if (menuItem == 0) menuResult = Quit;
		else if (menuItem == 1) menuResult = FizzBuzzProgram;
		else if (menuItem == 2) menuResult = CollatzProgram;

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