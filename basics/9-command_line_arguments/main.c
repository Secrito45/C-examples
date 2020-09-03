/**
 * Example of commandline arguments usage
 * by Konsta Siekkeli
 * 
 * 
 * Compile with command: 
 *  - g++ -o example main.c
 * 
 * Run the program with command:
 *  - ./example one two three four
 */

#include <iostream>

int main (int argc, char * argv[])
{
    std::cout << "\nAmount of given arguments: " << argc << std::endl;

    for (int i = 0; i < argc; i++)
    {
        if (i == 0)
        {
            std::cout << "First arqument: " << argv[0] << ", name of the running program" << std::endl;    
            std::cout << "List of options: " << std::endl;
        }
        else
        {
            std::cout << i << ". option: " << argv[i] << std::endl;
        }
    } 

    return 0;
}