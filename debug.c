// debug.c

#include <stdio.h>

#define DEBUG 3

int main(void)
{
    #if DEBUG == 1
        printf("Debug status is 1\n");
    #elif DEBUG == 2
        printf("Debug status is 2\n");
    #else
        #ifdef DEBUG
            printf("Debug is defined!\n");
        #endif
        #ifdef DEBUG
            printf("Debug is not defined!\n");
        #endif
    #endif

}