#pragma once
#include <vector>
#include <string>
#include <map>


std::vector<std::string> getWordsInLexicon(const std::string& lexiconFilename);

/*alternative func. name: getLetterFrequencyDistributionInLexicon*/
std::map<char, int> getLettersToCounts(const std::vector<std::string>& words);

int getCountsOfLeastFrequentCharacter(const std::map<char, int>& lettersToCounts);

std::map<char, int> scaleLettersToCounts(const std::map<char, int>& lettersToCounts, int minimumCounts);

void printLettersToCounts_AsHistogram(const std::map<char, int>& lettersToCounts);