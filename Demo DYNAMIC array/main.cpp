// Demo DYNAMIC array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<algorithm>
#include <iostream>

#include"demos.h"

/*This is an ALGORITHM (a sequence of steps that solves some "problem"*/
int findSmallestNumberInList(std::vector<int> someNumbers)
{
	int smallestNumber = someNumbers[0];

	for (int i = 1; i < someNumbers.size(); ++i)
	{
		if (someNumbers[i] < smallestNumber)
		{
			smallestNumber = someNumbers[i];
			std::cout << "The smallest number got UPDATED to: " << smallestNumber << "\n";
		}
	}

	return smallestNumber;
}

std::string findLongestNameInList(std::vector<std::string> someNames)
{
	std::string longestName = someNames[0];

	for (int i = 1; i < someNames.size(); ++i)
	{
		if (someNames[i].length() > longestName.length())
		{
			longestName = someNames[i];
		}
	}

	return longestName;

}

int main()
{
	std::vector<int> notSoRandomNums =
	{
		8,
		6,
		7,
		5,
		3,
		-12312,
		9
	};

	//std::cout << "The SMALLEST number in the list above (in the code) is: \n";
	//std::cout << findSmallestNumberInList(notSoRandomNums) << "\n";

	std::vector<std::string> namesOfSomePeopleInThisRoom =
	{
		"JoeBlow",
		"Harrison",
		"Walker",
		"adsfkjdsakjdsakjdafkjdskjdsfkjdsafkjdsafkjadkj", 
		"Tyler",
		"Joseph VanSmoorenburg", //of the castle smotherers
		"Seth"
	};

	std::cout << "The LONGEST name in the list above is: \n";
	//std::cout << findLongestNameInList(namesOfSomePeopleInThisRoom) << "\n";

	std::cout << *std::max_element(namesOfSomePeopleInThisRoom.begin(), namesOfSomePeopleInThisRoom.end()) << "\n";

}
