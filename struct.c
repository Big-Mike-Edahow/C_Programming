// struct.c

#include <stdio.h>

struct coords
{
    int x;
    int y;
} point;

struct coords top;

int main()
{
    point.x = 5;
    point.y = 8;

    top.x = 15;
    top.y = 24;

    printf("\nPoint x: %d, point y: %d\n", point.x, point.y);
    printf("\nTop x: %d, top y: %d\n\n", top.x, top.y);

    return 0;
}
