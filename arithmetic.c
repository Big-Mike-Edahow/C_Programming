// arithmetic.c

#include <stdio.h>

int main(void)
{
    // Variable declartion and initialization
    int a = 4;
    int b = 8;
    int c = 1;
    int d = 1;

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", b - a);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", b / a);
    printf("Modulus: %d\n", a % b);

    printf("Postfix increment: %d\n", c++);
    printf("Postfix now: %d\n", c);
    printf("Prefix increment: %d\n", ++d);
    printf("Prefix now: %d\n", d);

    return 0;
}