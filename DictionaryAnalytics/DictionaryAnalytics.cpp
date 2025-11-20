// DictionaryAnalytics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"analytics.h"

#include <iostream>


int main()
{

	std::string lexiconFilename = "lexicon.txt";

	try
	{
		auto words = getWordsInLexicon(lexiconFilename);

		auto lettersToCounts = getLettersToCounts(words); 

		printLettersToCounts_AsHistogram(lettersToCounts); 
	}

	catch (const std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
}
