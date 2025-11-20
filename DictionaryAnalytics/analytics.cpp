#include "analytics.h"

#include<algorithm>
#include<fstream>
#include <iostream>

std::vector<std::string> getWordsInLexicon(const std::string& lexiconFilename)
{
	std::ifstream fin(lexiconFilename); 
	if (!fin) throw std::runtime_error("FNFE");

	std::vector<std::string> words;

	std::string word; 
	while (std::getline(fin, word))
	{
		words.push_back(word); 
	}

    return words;
}

std::map<char, int> getLettersToCounts(const std::vector<std::string>& words)
{
	std::map<char, int> lettersToCounts; 

	for (const std::string& word : words)
	{
		for (char letter : word)
		{
			lettersToCounts[letter]++;
		}
	}

	return lettersToCounts;
}

int getCountsOfLeastFrequentCharacter(const std::map<char, int>& lettersToCounts)
{
	auto minIterator = std::min_element(lettersToCounts.begin(), lettersToCounts.end(),
		[](std::pair<char, int> a, std::pair<char, int> b) 
		//make const pair<char, int>& for better efficiency (no copies) (but perhaps less readable for beginners)
		{
			return a.second < b.second; 
		}
	);

	auto minPair = *minIterator; 

	return minPair.second; 
}

std::map<char, int> scaleLettersToCounts(const std::map<char, int>& lettersToCounts, int minimumCounts)
{
	std::map<char, int> scaledLettersToCounts = lettersToCounts; 

	for (auto& [letter, count] : scaledLettersToCounts) //this is called "structured binding" syntax 
		//it requires C++17!
	{
		count = count / minimumCounts; //or count /= minimumCounts
	}

	return scaledLettersToCounts;
}

void printLettersToCounts_AsHistogram(const std::map<char, int>& lettersToCounts)
{
	//for "scaling", find the minimum number of counts (probably z or q or x)
	int minimumCounts = getCountsOfLeastFrequentCharacter(lettersToCounts);

	//make a copy of the map with counts scaled by the least-frequently occurring character
	//(but why?)
	std::map<char, int> scaledLettersToCounts = scaleLettersToCounts(lettersToCounts, minimumCounts);

	for (const auto& [letter, count] : scaledLettersToCounts)
	{
		std::cout << letter << ": ";
		for (int i = 0; i < count; ++i)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
}


