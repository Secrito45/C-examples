/**
 * 
 */

#include <stdio.h>

int main(void){

    // Variable with value 15;
    int var = 15;

    // Creating pointer that we use to point var variable
    // Pointers are declared like followes with "*" symbol
    int *pointerToVar;

    // Pointers are used to store adresses to memorylocations

    printf("Printing variable value: %d\n", var);
    printf("Printing variable address: %p\n", &var);

    printf("\nStoring value address to our pointer...\n");
    pointerToVar = &var;
    printf("Printing pointerToVar: %p\n", pointerToVar);

    // By using the accesing syntax we can access the value stored
    // behind our pointer. The Accessing goes like this:

    int newVar = *pointerToVar;
    printf("Printing newVar's value: %d\n", newVar);
    printf("Printing var through pointerToVar: %d\n", *pointerToVar);

    return 0;
}