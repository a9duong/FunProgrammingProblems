#include "FizzBuzz.h"
#include <iostream>

//FizzBuzz program takes in a number n and iterates through 1 to n 
//and prints "Fizz" for numbers divisible by 3, "Buzz" for numbers divisible by 5
// and "FizzBuzz" for numbers divisible by 3 and 5
void FizzBuzz::Start()
{
	int numLines;
	std::cout << "Enter the number of lines you would like to use: ";
	std::cin >> numLines;
	for (int i = 0; i < numLines; ++i)
	{
		if ((i%3 == 0) && (i%5 == 0)){
			std::cout << "FizzBuzz\n";
		} 
		else if (i%3 == 0){
			std::cout <<"Fizz\n";
		} else if (i%5 == 0){
			std::cout <<"Buzz\n";
		} 
	}
}