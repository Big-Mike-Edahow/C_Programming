// breakcontinue.c

#include <stdio.h>

int main()
{
    for (int i = 1; i < 4; i++) {
        for (int j = 1; j < 4; j++) {
            if (i == 1 && j == 1) {
                printf("Continues inner loop when i = %d and j = %d\n", i, j);
                continue;
            }
            
            if (i == 2 && j == 1) {
                printf("Breaks inner loop when i = %d and j = %d\n", i, j);
                break;
            }

            printf("Running i = %d j = %d\n", i, j);
        }
    }
}
