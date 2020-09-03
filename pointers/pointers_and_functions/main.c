/**
 * Example of passing pointers to function as argument
 * by Konsta Siekkeli
 */

#include <stdio.h>
#include <stdlib.h>

// FUNCTION DECLARATIONS

void reverse(int* IOArg);
char* lower_case(char* str, int size);


// MAIN FUNCTION

int main()
{
    int value = 1234;
    int* input = &value;

    printf ("Input value: %d\n", *input);

    reverse(input);

    printf ("Output value: %d\n", *input);


    char str[] = "HELLO, WORLD!";
    
    printf ("String %s length is: %lu characters\n", str, sizeof(str));

    char* editedStr = lower_case(str, sizeof(str));

    printf ("String is now: %s with length of %lu characters\n", editedStr, sizeof(str));

    // Remember to free the allocated memory in lower_case function
    free(editedStr);
    return 0;
}


// FUNCTION DEFINITONS

void reverse(int* IOArg)
{
    *IOArg = 5555 - *IOArg;
}

char* lower_case(char* str, int size)
{
     char* buff = (char*) malloc(size);

    for (int i = 0; i < size; i++)
    {
        if ( 65 <= (int) str[i] && 90 >= (int) str[i])
        {
            buff[i] = str[i] + 32;
        }
        else
        {
            buff[i] = str[i];
        }
    }

    return buff;
}