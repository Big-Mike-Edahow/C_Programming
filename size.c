// size.c

#include <stdio.h>

int main()
{
    int num = 1234567890;

    struct {
        int score; char grade;
        }
    result;

    printf("Size of int data type is %d bytes\n", sizeof(int));
    printf("Size of int variabe is %d bytes\n\n", sizeof(num));

    printf("Size of an int array is %d bytes\n", sizeof(int[3]));
    printf("Size of a structure is %d bytes\n", sizeof(result));

    return 0;
}
