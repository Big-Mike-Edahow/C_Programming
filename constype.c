// constype.c

#include <stdio.h> 

int main(void)
{
    // Initialize an inumerated set of constants
    enum SNOOKER { RED = 1, YELLOW, GREEN, BROWN, BLUE, PINK, BLACK };
    enum SNOOKER pair = RED + BLACK;

    printf("Pair Value: %d\n", pair);

    // Custom data type USINT
    typedef unsigned short int USINT;
    USINT num = 16;

    printf("Unsigned short in value: %d\n", num);

    return 0;
}