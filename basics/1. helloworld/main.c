/*
Welcome to the first basics example about c language programming

This example tries to explain you how to make your classical first program also
called the Hello world program. This consist setting up your programming environment.

These examples are done using Linux, GCC compiler and make.
*/

//First about comments. Comments are used to make notes and explain the code
//Line of code after double lashes '//' is ignored and not considered as code
//Also multi line comments are possible but between marks '/*' and '*/'
/* So all these
lines are not 
cosidered as code */

//Includes: Includes are used to connect files containing code together.
#include <stdio.h> //This is how you make include

//stdio.h is the file we are including for now and most of the time. Later is explained what we get by including this file

/* This is the main function. all code you make shoud go inside the '{ }' brackets.
when you write the main function it should always look like this:

int main(void)
{

    return 0; //return 0 needs to allways be at the end of your main function
}

In later examoles we going to give some parameters for the main function but for now this is all we need
Next let's write our hello world program.
*/

int main(void)
{
    puts("Hello, World!");

    return 0;
}

// Now open this folder to your terminal and type make 
// After this your terminal should display Hello, World!