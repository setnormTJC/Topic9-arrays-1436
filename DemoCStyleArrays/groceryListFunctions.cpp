#include "groceryListFunctions.h"
#include <iostream>

void makeGroceryList()
{
    std::array<std::string, 4> groceryList =
    {
        "eggs",
        "milk",
        "tuna", //this is an homage to Bucky the YouTuber        
        "bacon"
    };

    std::cout << "The grocery list INITIALLY contains:\n";

    printTheGroceryList(groceryList);

    std::cout << "Do you want to change any of those items?";
    std::string response; 

    std::getline(std::cin, response); 

    if (response == "yes")
    {
        std::string currentItem; 
        for (int i = 0; i < groceryList.size(); ++i)
        {
            std::cout << "Enter item number: " << i + 1 << "\n";
            std::getline(std::cin, currentItem);
            //overwrite the contents of the array at the given index (i): 
            groceryList[i] = currentItem; 
        }
    }

    std::cout << "The grocery list was updated to: \n"; 
    printTheGroceryList(groceryList);

}

void printTheGroceryList(std::array<std::string, 4> groceryList)
{
    std::cout << "The SIZE of the array is: " << groceryList.size() << "\n"; //Bytes

    for (int index = 0; index < groceryList.size(); ++index)
    {
        std::cout << groceryList.at(index) << "\n";
    }

    std::cout << "What is the element at index 5 in the list? " << groceryList[5] << "\n";
}
