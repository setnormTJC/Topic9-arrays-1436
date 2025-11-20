// Sets - AKA arrays without duplicates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<set> 
#include<vector> 

void printDynamicArrayContents(std::vector<std::string> list) //a dynamic array can GROW and SHRINK (as needed)
{
	for (std::string currentItem : list) //"range-based" for loop (looks like Python)
	{
		std::cout << currentItem << "\n";
	}
}

void printSetOfStuff(std::set<std::string> set)
{
	for (std::string currentItem : set)
	{
		std::cout << currentItem << "\n";
	}
}

int main()
{
	int nums[10]; //C-style array (unsafe)

	//This "data structure" is called a "dynamic array"
	std::vector<std::string> listOfCustomers =
	{
		"Alice",
		"Bob Boblaw", //Arrested Development (law blog)
		"Carol",
		"Darth"
	};

	std::set<std::string> setOfCustomers =
	{
		"Alice",
		"Bob Boblaw", //Arrested Development (law blog)
		"Carol",
		"Darth" //"keys" must be "unique" 
	};
	
	setOfCustomers.insert("Bob Boblaw");
	setOfCustomers.insert("Frank"); //this would "throw" an error IF the set were NOT having dynamic capabilities

	//listOfCustomers.push_back("Bob Boblaw");

	//printDynamicArrayContents(listOfCustomers); 

	printSetOfStuff(setOfCustomers); 
}
