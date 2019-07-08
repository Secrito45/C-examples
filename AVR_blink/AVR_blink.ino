/**
 * This codes works so that it uses timer interrups to make arduinos integrated
 * led blink once in four seconds. Two seconds On two seconds Off.
 *  
 * ############################ TASK #####################################
 * Make your own version from this code using same AVR commands that
 * the led blinks once every second. Return the result to your Github page 
 * before 10.07.2019.
 * #######################################################################
 * 
 * https://www.arduino.cc/en/Hacking/PinMapping168
 * 
 * About timers
 * http://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-7810-Automotive-Microcontrollers-ATmega328P_Datasheet.pdf
 * Starting from page 74 or chapert 14.
 * 
 * https://www.instructables.com/id/Arduino-Timer-Interrupts/
 * https://www.robotshop.com/community/forum/t/arduino-101-timers-and-interrupts/13072
 * The Arduino has 3Timers and 6 PWM output pins. 
 * The relation between timers and PWM outputs is:
 * Pins 5 and 6: controlled by timer0
 * Pins 9 and 10: controlled by timer1
 * Pins 11 and 3: controlled by timer2
 */

#include <avr/io.h>
#include <avr/interrupt.h>

long int i;

char condition = 0;

int main()
{
    // Init Arduino board

    cli();//stop interrupts

    // Timer1 initialization
    // Assign first registers TCCR1A, -B and counter val. to 0
    TCCR1A = 0; TCCR1B = 0; TCNT1 = 0;
    // set compare match register for 0,5hz increments
    OCR1A = 30637;
    // turn on CTC mode    
    TCCR1B |= (1 << WGM12);
    // Set CS10 and CS12 bits for 1024 prescaler
    TCCR1B |= (1 << CS12) | (1 << CS10);  
    // enable timer compare interrupt
    TIMSK1 |= (1 << OCIE1A);

    
    // Set the pin datadirection in register: 0 is input, 1 is output
    DDRB |= B00000000;
    // Setting port B's pin 5 to output.
    DDRB |= 1<<PB5;

    // Setting the led pin to high state
    // Port pin state control: 0 is LOW, 1 is HIGH
    //PORTB |= 1<<PB5;

    sei();//allow interrupts

    // Main loop
    while(1)
    {
      // If true do this
      if(condition){
        // Set pin to HIGH
        PORTB |= 1<<PB5;
      }
      else{
        // Set pin to LOW
        PORTB &= ~(1<<PB5);
      }
    }

    return 0;
}

// Interupt handler for timer1 CTC reg. interrupt vector
ISR(TIMER1_COMPA_vect){
  // Assign condition to be it's negation. True to False, False to True
  condition = !condition;
  TCNT1 = 0;  // Zero the timer
}
