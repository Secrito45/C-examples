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

#define STORAGE_ID "shm_file"
#define BUFFER_SIZE 1       // NOTE!: Size can be more than 1

int main(void)
{
    // Create a shm object.
    int shm_fd = shm_open(STORAGE_ID, O_RDONLY, 0666);

    // Map the shm segment and create pointer to that memory segment
    // Where flags PROT_READ => map the memory for reading
    // and MAP_SHARED => created memory is a shared memory segment
    char* buf_ptr = (char*) mmap(NULL, BUFFER_SIZE, PROT_READ, MAP_SHARED, shm_fd, 0);
    //                ^_____ Needs cast from void* to char*

    // read data to the shared memory and print the result
    printf("Value in POSIX style shared memory: %c\n", *buf_ptr);

    // Free the mapped memory address range. Free the memory back to use.
	munmap(buf_ptr, BUFFER_SIZE);

	// Delete the shm object created with shm_open
    shm_unlink(STORAGE_ID);

    return 0;
}