/*
This is a example to explain string arrays and how to manipulate them

As one shoud know already c type string is a array of character like:
    Example 1.    str[] = {'f', 'o', 'o', '/0'};
Same can be witten like follows:
    Example 2.    str[] = "foo";
It's good to note that thought we don't write the nullcharacter '\0' in the example 2
it's still present and makes the str arrays size equal 4 characters ( 4 x 8 bits).

String "Variable" can also be defined as str[4] = "foo"; With this type of declaration
we could left the = "foo" assignment part out and assign the array later with value.
This thought needs a looping structures or usage of pre defined functions like strcpy().

This is caused the fact that c-type string "variable" is only pointer to section in memory 
that holds the first character of that string followed by the rest of the characters making that string

More examples about c-type strings can be found under c_string -folder.
More examples about pointers and memory is located under the pointers -folder.


*/
#include <stdio.h>
#include <string.h>

int main(void){

    char *str1[] = {"Foo", "Spam", "Eggs", "Bacon"};

    char *str2[4];

    int i = 0;

    for (i = 0; i < 4; i++){
        printf("%s\n", str1[i]);
        str2[i] = str1[i];
    }

    for (i = 0; i < 4; i++){
        printf("%s\n", str2[i]);
    }
    return 0;
}