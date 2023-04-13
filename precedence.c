// precedence.c

#include <stdio.h>

int main()
{
    printf("\nDefault precedence (( 2 * 3 ) + 4) - 5:\t%d\n", 2*3+4-5);
    printf("Explicit precedence 2 * (( 3 + 4 ) -5):\t%d\n", 2 * (( 3 + 4 ) -5));

    printf("Default precedence ( 7*3 ) %% 2:\t\t%d\n", 7 * 3 % 2);
    printf("Explicit precedence 7 * ( 3 %% 2 ):\t%d\n", 7 * ( 3 % 2 ));

    int num = 9;
    printf("\nDefault precedence ( 8 / 2 ) * 4:\t%d\n", --num / 2 * sizeof(int));

    num = 9;
    printf("Explicit precedence 8 / ( 2 * 4 ):\t%d\n", --num / ( 2 * sizeof(int)));

    return 0;
}