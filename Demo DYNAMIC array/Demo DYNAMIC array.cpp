// Demo DYNAMIC array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<algorithm>
#include <iostream>
#include<vector> 

int main()
{
	std::cout << "How many numbers do you want to be displayed?\n";

	int numberOfNumbersDesired; 
	std::cin >> numberOfNumbersDesired;

	std::vector<int> listOfNumbers; 

	for (int i = 0; i < numberOfNumbersDesired; ++i)
	{
		listOfNumbers.push_back(rand() % numberOfNumbersDesired);
	}

	//print those numbers
	for (int i = 0; i < numberOfNumbersDesired; ++i)
	{
		std::cout << listOfNumbers[i] << "\n";
	}

	//reverse the list: 
	std::reverse(listOfNumbers.begin(), listOfNumbers.end());
	std::cout << "\n\n\nThe REVERSED list:\n";
	for (int i = 0; i < numberOfNumbersDesired; ++i)
	{
		std::cout << listOfNumbers[i] << "\n";
	}
	//add up all the random

	int sum = 0; 

	for (int i = 0; i < numberOfNumbersDesired; ++i)
	{
		sum = sum + listOfNumbers[i]; 
	}

	std::cout << "Sum is: " << sum << "\n";
}
