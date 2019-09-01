/*
This example contains information about strings used in C.

First it's good to recall what are arrays and char datatype:
    > Arrays are containers that can store specified amound of sametype of data.
      Array declaration example: int numArray[4] = {1, 2, 3, 4};
      The "variable" numArray is really a integer type pointer, pointing to the first element
      inside the allocated memoryspace.
      If this sounds complicated I recommend going throug the pointer examples before continuing.

    > Char is a datatype for characters (a, b, c, d, e, etc...). Its capacity is one Byte 
      and because Byte is 8 bits char can be used to store 8 bits of data making it a good
      container type for small amounts of data. All thought uint_8 data type is still more
      recommented to be used this kind of situations.

Now back to the question what is C-type String? C-type String is just array of characters.
All thought there is some special things to remember making C strings little different from
other arrays.

Every C string should end to so called "null character" '\0' also plain numeric value 0 can be used.
So constructed string is also called Null-terminated String.

NOTE that value 0 and character '0' are two different things in computer science. Sometimes it's easier to convert 
characters to plain values to easy the understanging process how them work inside a computer.

So 0 as plain value is of course just 0 but '0' character as plain value equals 48.
The most used and standardised character set is called ASCII. ASCII table can be used to find the
real numeric value presenting each character.

Link to ASCII table: http://www.asciitable.com/

Next up code examples.
*/

#include <stdio.h>

int main(void)
{   
    // This is a array of characters containing the classic "Hello, World!"
    char arrayOfChars[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!'};

    // arrayOfChars can be printed like so
    for(int i=0;i < (int)sizeof(arrayOfChars);i++) // (int)sizeof returns the number of elements stored to arrayOfChars
    {
        putchar(arrayOfChars[i]);
    }
    putchar('\n'); // To print newline.
    /*Prints as: Hello, World!*/

    char cString[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', 0};

    for(int i=0;i < (int)sizeof(arrayOfChars);i++) // (int)sizeof returns the number of elements stored to arrayOfChars
    {
        putchar(arrayOfChars[i]);
    }
    putchar('\n'); // To print newline.
    /*Prints as: Hello, World!*/

    /*
    At this point it's recommended to run the program.
    By looking the prints appearing to the terminal window you can see that the variables prints out
    the same way though the cString ends to the null character
    */

    /**********************************************************************************************************************
    Different ways to declare cString.
    
    These ways work, but are inpractical. Though them are a good way to demonstrate the cString's structure
    With size definition:       char cString[14] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', 0}; 
    With out size definition:   char cString[]   = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', 0};

    Following methods are more practical ways for declaring
    With size definition:       char cString[14] = "Hello, World!";
    With out size definition:   char cString[]   = "Hello, World!";
                                char *cString    = "Hello, World!";

    NOTE! Now comes some technical stuff, but try to follow. When declearing cStrings without size
    them are marked to the memory as read-only in other words this kind of variables can be considered as Constants. 
    So you can example print the contained data from this type of variable but you can't change the data afterwards. 
    Only way to make read/write type cString variables is to define the sizefor the variable when declaring it. 
    This can be done two ways that follows next. 

    ways to declare r/w-type cString variables.
    char cString[256] = "Changable data";
    char cString[256];

    Also there is function called malloc (memory allocate). The syntax goes as fallows
    char *cString = (char*)malloc(256); Parameter is the allocatable memory amount in bytes.
    Malloc returns a pointer to the allocated memory address.

    To use malloc stdlib.h needs to be included and also after done using the pointer free(<pointer>) needs to be used
    to return the allocated memory space back to use. Otherwise there is a high change for memoryleaks.
    */


    return 0;
}