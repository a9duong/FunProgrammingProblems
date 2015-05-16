#include <iostream>
#include "IsPrime.h"
#include <math.h>
#include <limits>

void Prime::Start()
{
	int n;
	int acc;

	std::cout << "Enter a number between 1 and 2147483647 to check if it's prime: ";
	std::cin >> n;

	bool isPrime = IsPrime(n, acc);

	if (acc == 1)
	{
		std::cout << "1 is not prime by definition!";
	} 
	else if (acc == 2)
	{
		std::cout << "2 is a prime number!";
	}
	else if (isPrime)
	{
		std::cout << "Your number is a prime!\n";
	}
	else
	{
		std::cout <<"Your number is composite! It's divisible by " << acc << ".\n";
	}
}

bool Prime::IsPrime(int n, int& acc)
{
		if (n <= 1)
		{
			acc = 1;
			return false;
		}
		else if (n == 2)
		{
			acc = 2;
			return true;
		}
		else if (n%2 == 0)
		{
			acc = 2;
			return false;
		}
		else
		{
			bool prime = true;
			int divisor = 3;
			double num_d = static_cast<double>(n);
			int upLimit = static_cast<int>(sqrt(num_d)+1);

			while (divisor <= upLimit)
			{
				acc = divisor;
				if (n % divisor == 0)
				{
					prime = false;
					break;
				}
				divisor += 2;
			}
			return prime;
		}
}
