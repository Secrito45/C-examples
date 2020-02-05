#include <stdio.h>
#include "utils.h"

int main()
{
    int val = 1;
    int oring = 0;
    char byte = 0b01010101;

    printf("Val is %s'B\n", binbin(val));

    for(int i = 0; i < 8; i++)
    {
        printf("After shifting %d bit: %s'B\n", i, binbin(val << i));
    }
    
    printf("Val is %s'B\n", binbin(val));
    printf("\noring is %s'B\n", binbin(oring));

    for(int i = 0; i < 8; i++)
    {   
        oring <<= 1;
        oring |= 0b00000001;
        printf("After oring %d bit: %s'B\n", i+1, binbin(oring));
    }
    printf("\n");

    for(int i = 0; i < 8; i++){
        if(byte & 0b10000000){
            printf("1");
        }
        else{
            printf("0");
        }
        byte <<= 1 ;
    }
    printf("'B\n");

    return 0;
}
