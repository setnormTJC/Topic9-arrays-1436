#pragma once
#include <iostream>
#include <vector>
#include <string>

void printNames(std::vector<std::string> names)
{
	for (int i = 0; i < names.size(); ++i)
	{
		std::cout << names[i] << "\n"; //[] is called the "subscript (or index) operator" ... 5 + 2 + is called the addition operator
	}
}



void demoSomeDynamicArrayStuff()
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

void demoSimpleIntegerArray()
{
	//std::array<int, 5> nums = { 1, 2, 3,4, 5 };

	//std::cout << nums[1233] << "\n"; //fails!

	std::vector<int> nums = { 11, 22, 33, 44, 55 };

	//std::cout << nums[0] << "\n";

	nums.push_back(123);

	//std::cout << nums[5] << "\n";

}

void demoDynamicStringArray()
{
	std::vector<std::string> names =
	{
		"Alice",
		"Bob",
		"Carol",
		"Darth",
		"Eve",
		"Frank",
		"Gus"
	};

	names.push_back("asdfasdfasfdasdf");

	for (int i = 0; i < 4; ++i)
	{
		std::string currentString = std::to_string(i);
		names.push_back(currentString);
	}

	printNames(names);
}

