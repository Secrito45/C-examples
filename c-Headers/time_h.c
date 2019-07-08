/**
 * This project shows examples how the time.h ANIS-C library works
 * and how it can be used.
 */

#include <time.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    static struct tm* info;
    time_t rawtime;

    //Get the raw time
    time(&rawtime);

    //Get pointer to tm struct object holding date objects
    info = gmtime(&rawtime);    //info's tm_year = yearNow - 1970.

    //Print the timestamp
    printf("The current: %d-%d-%d %d:%d:%d\n", 
    info->tm_year + 1900, info->tm_mon, info->tm_mday, info->tm_hour, info->tm_min,info->tm_sec);

    return 0;
}
