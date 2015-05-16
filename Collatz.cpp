#include "Collatz.h"
#include <iostream>

void Collatz::Start()
{
	int n;

	std::cout << "Welcome to the Collatz Program\n";
	std::cout << "Please enter an integer number to begin: ";
	std::cin >> n;
	CollatzStart(n, 0);
}

int Collatz::CollatzStart(int n, int acc)
{
	if (n == 1)
	{
		std::cout << "It took " << acc << " steps to reach 1!";
	}
	else if (n%2 == 0)
	{
		return CollatzStart(n/2, acc + 1);
	} 
	else 
	{
		return CollatzStart(3*n + 1, acc + 1);
	}
}
