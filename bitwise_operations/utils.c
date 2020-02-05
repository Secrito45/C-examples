#include "utils.h"

char *binbin(int n){
    static char bin[9];
    int x;
    for (x = 0; x<8; x++){
        // Determing is the bit 1 or 0
        bin[x] = n & 0x80 ? '1' : '0';
        //Shifting n var's bits one to the right
        n <<= 1;
    }
    bin[x] = 0;
    return(bin);
}