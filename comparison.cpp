#include <iostream>
#include "randinput.h"

bool comparison(int rand, int input)
{
    if (input < rand)
    {
        std::cout  << "Go higher!" << "\n";
        return false;
    }
    
    if (input > rand)
    {
        std::cout << "Go lower!" << "\n";
        return false;
    }
    if (input == rand)
    {
        std::cout << "Bang on!";
        return true;
    }
    
    return 0;
}