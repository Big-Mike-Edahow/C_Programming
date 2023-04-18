// dowhile.c

#include <stdio.h>

int main()
{
    int arr[3] = {10, 20, 30};

    int i = 0;
    while (i < 3) {
        printf("While: arr[%d] = %d\n", i, arr[i]);
        i++;
    }

    int j = 0;
    do {
        printf("\nDo while: arr[%d] = %d", j, arr[j]);
        j++;
    }
    while (j < 3);

    printf("\n");

    return 0;
}