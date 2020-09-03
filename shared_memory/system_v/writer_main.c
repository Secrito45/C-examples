/**
 * System V shared memory example 
 * by Konsta Siekkeli, 03/07/2020
 * 
 * This code is example to show the System V style write to shared memory segment
 * 
 * NOTE! This part of the code should be started first
 * and then start the read program on another terminal/console window
 */

#include <stdio.h>
#include <stdbool.h>
#include <sys/ipc.h>
#include <sys/shm.h>
//#include <string.h>

// In this example only one byte amount of space is allocated to the shem segment
// This segment is then used to pass char 'a' from this writer program
// to the reader program

#define BUFFER_SIZE     1

int main(void)
{
    // Create a system V IPC key
    key_t key = ftok( ".", 45 );

    // Create a shared memory segment using the key
    int shmid = shmget(key, BUFFER_SIZE, 0666 | IPC_CREAT);

    // Attach the shared memory segment and write data 'a' to segment;
    char* buf = (char*) shmat(shmid, NULL, 0);
    *buf = 'a';

    // Stop writing to the memory and free it.
    shmdt(buf);

    // stop the program run. To exit program press ctrl + c
    while(true);

    return 0;
}