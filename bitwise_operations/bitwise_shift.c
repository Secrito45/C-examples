#include <stdio.h>
#include "utils.h"

/**
 * Bitwise Shift - bittisiirto
 * 
 * Kuinka se toimii?
 *  Siirto (tai shift) operaation tarkoitus on siirtää muistissa/rekisterissä olevia bittejä.
 *  Siirto operaatiosta on kaksi versiota << ja >>.
 * 
 *  << siirto operaatio siirtää bittejä oikealta vasemmalle.
 *  Operaation syntaxi menee seuraavasti:
 * 
 *  [Siirrettävä arvo] << [Siirtojen lukumäärä]
 * 
 *  >> siirto operaatio siirtää bittejä vasemmalta oikealle.
 *  Operaation syntaxi menee seuraavasti:
 * 
 *  [Siirrettävä arvo] >> [Siirtojen lukumäärä]
 * 
 * Esimerkiksi, jos meillä on seuraava binäärisarja: 0b11110000 (joka on muuten 0x80 hexana)
 * ja suorittaisimme sille seuraavan operaation 0b11110000 >> 4,
 * muutuissi binääri sarja seuraavasti  0b11110000 ---> 0b00001111.
 * Eli operaatiossa siirsimme binäärin bittisarjaa vasemmalta oikealle neljä pykälää.
 */

int main(void)
{
    printf("Outputs with this shift syntax: 1 << i in for-loop\n");
    for (int i = 0; i < 8; i++){
        printf("%s\n", binbin(1 << i));
    }

    printf("\nOutputs with this shift syntax: 0 << i in for-loop\n");
    for (int i = 0; i < 8; i++){
        // NOT LIKE THIS: 0 << n, where n is the port pin number
        printf("%s\n", binbin(0 << i));
    }

    printf("\n\nSigning PORTB to ones\n");

    __uint8_t PORTB = 0xff;
    printf("PORTB: %s\n", binbin(PORTB));

    printf("\nUsing following syntax: (0 << PB0) | (0 << PB1)\n\
to change pin 0 and 1 to zero\n");
    PORTB |= (0 << PB0) | (0 << PB1);
    printf("PORTB: %s\n", binbin(PORTB));
    printf("... Jep, not working\n");

    printf("\nPORTB still ones\n");
    printf("PORTB: %s\n", binbin(PORTB));
    printf("\nUsing following syntax: PORTB &= ~((0 << PB0) | (0 << PB1))\n\
to change pin 0 and 1 to zero\n");
    PORTB &= ~((1 << PB0) | (1 << PB1));
    printf("PORTB: %s\n", binbin(PORTB));

    return 0;
}