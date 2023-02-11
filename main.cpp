#include <iostream>
#include "randinput.h"

int main()
{   
    int rand{randNum()};
    bool x{comparison(rand, userInput())};

    while (x==false)
    { 
       bool x{comparison(rand, userInput())}; 

       if(x==true)
       {
         return 0;
       }
    }

    return 0;
}