// Example of 2D array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<array> 
#include <iostream>



int main()
{
	std::array<std::array<char, 3>, 3> ticTacToeGrid =
	{
		{
			{'a', 'b', 'c'},
			{'d', 'e', 'f'},
			{'g', 'h', 'i'}
		}
	};

	std::cout << ticTacToeGrid[3][3] << "\n";



}
