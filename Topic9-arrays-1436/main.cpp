// Topic9-arrays-1436.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


struct BottleOfLotion
{
    double volume{}; //remember, braces iniitliaze this double to 0.0
    std::string scent; 
    std::string brand; 
};


void printListOfBodyLotions(BottleOfLotion listOfLotions[3])
{
    for (int i = 0; i < 3; ++i)
    {
        std::cout << listOfLotions[i].brand << "\t"
            << listOfLotions[i].scent << "\t"
            << listOfLotions[i].volume << "\n";
    }
}


int main()
{
    BottleOfLotion theBESTBodyLotion = { 999.9, "Freshly-mown grass", "Nike" };


    double firstLotionsVolume = 16.0; 
    double secondLotionsVolume = 16.9;
    //etc.

    std::string firstLotionsScent = "Vanilla";

    BottleOfLotion listOfLotions[3] = 
    {
        {16.0, "Vanilla",       "eos"},
        {16.9, "Unknown scent", "NIVEA"}, 
        theBESTBodyLotion
    };


    printListOfBodyLotions(listOfLotions);

}
