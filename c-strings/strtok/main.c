#include <stdio.h>
/*When using predefined methodes for string manipulation string.h header needs to be included.
  */
#include <string.h>

/*
    This exampel shows and explains how to use predefined c-string function strtok().

    strtok() funktion can be used to extract small sections from a main string separated by delimiter characer (usually comma ,).
    strtok (str, delim ) takes two parameter, where str is the main string and delim is the used separator character.

    lets use this as example string: "foo,spam,eggs,monty", and see what happens in the example code.
*/

void test (char* );

int main(void){
    char str[] = "foo,spam,eggs,monty";
    char *pch;

    printf("%s\n", str);
    pch = strtok (str, " ,");
    printf("%s\n", str);

    while(pch != NULL){
        printf("%s\n", pch);
        pch = strtok (NULL, " ,");
    }

    return 0;
}
