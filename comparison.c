// comparison.c

#include <stdio.h>

int main()
{
    int zero = 0;
    int nil = 0;
    int one = 1;
    char upr = 'A';
    char lwr = 'a';

    printf("Equality (0 == 0): %d\n", zero == nil);
    printf("Equality (0 == 1): %d\n", zero == one);
    printf("Equality (A == a): %d\n", upr == lwr);
    printf("Inequality (A != a): %d\n", upr != lwr);
    printf("Greater than (1 > 0): %d\n", one > nil);
    printf("Less than (1 < 0): %d\n", one < nil);
    printf("Greator or equal (0 >= 0): %d\n", zero >= nil);
    printf("Less or equal (1 <= 0): %d\n", one <= nil);

    return 0;
}