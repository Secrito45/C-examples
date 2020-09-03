/**
 * Custom lib including example
 * Konsta Siekkeli, 
 */

#include "my_lib.h"
#include <iostream>

// Implemetation of the program
void sub_program(void)
{
    std::string input;

    std::cout << "Write something: ";
    std::cin >> input;

    std::cout << "You wrote: " << input << std::endl;
}