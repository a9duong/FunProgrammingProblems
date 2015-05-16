#include <iostream>
#include "FizzBuzz.h"
using namespace std;

int main(void){

	enum MenuResult {Quit, FizzBuzz};
	MenuResult menuResult;
		int menuItem;
		int choice;

	while (true){
		cout << "Welcome to my random program! Here I just experiment with different programming problems"
			 << " which you can access using the menu commands" << endl << endl;
		cout <<"Enter '0' to quit\n";
		cout << "Enter '1': FizzBuzz\n";
		cout << endl;
		cout << "Your entry: ";
		cin >> menuItem;
		cout << endl;

		if (menuItem == 0) menuResult = Quit;
		if (menuItem == 1) menuResult = FizzBuzz;

		switch (menuResult)
		{
		case Quit:
			exit(1);
		case FizzBuzz:
			FizzBuzz::Start();
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