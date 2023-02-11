#include <iostream>
#include <cstdlib>              // for rand functon
#include <ctime>                // for time stuff


int userInput()
{
    std::cout << "Enter a guess (0-50): ";
    int input{};
    std::cin >> input;

    return input;
}

int randNum()                   // this is pretty unnessasary but it helps with my brain to make rand modular
{   
    srand(time(0));
    int x{rand() % 50};
    return x;
}