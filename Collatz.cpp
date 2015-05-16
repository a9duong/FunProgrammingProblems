#include "Collatz.h"
#include <iostream>

//Small introduction which asks user to enter a number
void Collatz::Start()
{
	int n;

	std::cout << "Welcome to the Collatz Program\n";
	std::cout << "Please enter an integer number to begin: ";
	std::cin >> n;
	CollatzFunction(n, 0);
}

//CollatzFunction is a recursive function which goes through the collatz algorithm
// and returns the number of steps it took to reach 1
int Collatz::CollatzFunction(int n, int acc)
{
	if (n == 1)
	{
		std::cout << "It took " << acc << " steps to reach 1!";
	}
	else if (n%2 == 0)
	{
		return CollatzFunction(n/2, acc + 1);
	} 
	else 
	{
		return CollatzFunction(3*n + 1, acc + 1);
	}
}
