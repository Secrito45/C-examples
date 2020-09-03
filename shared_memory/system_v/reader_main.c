/**
 * System V shared memory example 
 * by Konsta Siekkeli, 03/07/2020
 * 
 * This code is example to show the System V style read from shared memory
 * 
 * NOTE! This part of the code should be run after the write code.
 */

#include <stdio.h>
#include <stdbool.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#define BUFFER_SIZE 1

int main(void)
{
    key_t key = ftok( ".", 45 );

    // This program is used to write in shared memory
    int shmid = shmget(key, BUFFER_SIZE, 0666 | IPC_CREAT);

    // Attach the shared memory segment and write data;
    char* buf = (char*) shmat(shmid, NULL, 0);    

    printf( "Value in System V style shared memory: %c\n", *buf);

    // Detach from shared memory
    shmdt(buf);

    // destroy the shared memory 
    shmctl(shmid, IPC_RMID, NULL); 

    return 0;
}