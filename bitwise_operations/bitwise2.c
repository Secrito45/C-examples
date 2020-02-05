#include <stdio.h>

// Explaining sections from this code for example

int main(int argc, char const *argv[])
{
    /**
     * For loop is used to make the val equal number two's
     * 28 potence that should be 268435456.
     * every iteration the val's current value and iteration/potence
     * value should be printed.
     * 
     * After for loop val should equal 268435456
     */

    unsigned int val = 1;
    printf("%ld\n", sizeof(val));
    for (int i = 0; i < 28; i++){
        val = val * 2;
        printf("At iteration %d val is: %d\n", i, val);
    }

    /**
     * This does't really need explaining because you should be able to
     * read the purpose from the command
     */
    printf("Val is: %d\n", val);


    /**
     * In nut shell
     * This is bad explanation:
     *     "This for loop starts to iterate the val's amount of times.
     *      When the index number i hits value 16 000 000 it prints pöö, 
     *      the iteration number and then exits the loop"
     * because you can say all those thing by reading the code
     * 
     * Good explanation is to tell why this code is here, like:
     *     "If condition inside the for loop is to test does the loop
     *      ever reach the value 16 000 000. If this happen the run
     *      should print message and iteration value and then break from the loop"
     */
    for(int i = 0; i < val; i++){
        if(i == 16000000){
            printf("Pöö at iteration %d\n", i);
            break;
        }
    }
    
}