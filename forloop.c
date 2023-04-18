// forloop.c

#include <stdio.h>

int main()
{
    for (int i = 0; i < 3; i++) {
        printf("Outer loop iteration %d\n", i);
        for (int j = 0; j < 3; j++) {
            printf("\tInner loop iteration %d\n", j);
        }
    }

    return 0;
}
