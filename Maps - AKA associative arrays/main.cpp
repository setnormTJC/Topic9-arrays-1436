// Maps - AKA associative arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<map> 
#include <string>

int main()
{
	std::map<char, int> lettersToPoints =
	{
		{'a', 1}, //this is a "key-value" pair
		{'b', 3},
		{'c', 123123}
		//etc.
	};

	char letter = 'c'; 

	//std::cout << "The value of the letter " << letter << " is"
	//	<< lettersToPoints[letter] << "\n";


	std::map<std::string, std::string> germanToEnglish =
	{
		{"kleine", "small"},
		{"mehrheit", "majority"},
		//insert the other 20K words in the dictionary
	};

	std::cout << "Enter the word you want to translate from German to English:\n";
	std::string userWord;
	std::getline(std::cin, userWord); //getline allows SPACES, cin >> does not

	std::cout << "That word in English is: " << germanToEnglish[userWord] << "\n";

}

