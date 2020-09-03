/**
 * POSIX shared memory example
 * by Konsta Siekkeli, 06/07/2020
 * 
 * compile the code with commands:
 * g++ -Wall write.c -lrt -o write
 * g++ -Wall read.c -lrt -o read
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/mman.h>
#include <fcntl.h>

#define STORAGE_ID "shm_file"   // Needs to be defined as same in write and read
#define BUFFER_SIZE 1           // NOTE!: Size can be more than 1

int main(void)
{
    // Create a shared memory (shm) object
    // O_RDWR flag is neaded
    int shm_fd = shm_open(STORAGE_ID, O_CREAT | O_RDWR, 0666);

    // This funktion is used to resize the shm_fd to BUFFER_SIZE
    ftruncate(shm_fd, BUFFER_SIZE);

    // Map the shm segment and create pointer to that memory segment
    // Where flags PROT_WRITE => used for writing
    // and MAP_SHARED => created memory is a shared memory segment
    char* buf_ptr = (char*) mmap(NULL, BUFFER_SIZE, PROT_WRITE, MAP_SHARED, shm_fd, 0);
    //                ^_____ Needs cast from void* to char* in this case

    // Write data to the shared memory buffer pointed by buf_ptr
    *buf_ptr = 'g';

    // NOTE!: You need to open new terminal window to run read.c
    puts("Press ctrl + c to quit program after executing read.c");
    while(1); // Halts the program excecution

    return 0;
}