// isval.c

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[7];
    int flag = 1;

    puts("Enter six digits without any spaces...");
    gets(str);

    for (int i = 0; i < 6; i++) {
        if (!isdigit(str[i])) {
            flag = 0;

            if (isalpha(str[i])) {
                printf("Letter %c found.\n", toupper(str[i]));
            }

            else if (ispunct(str[i])) {
                printf("Punctuation found.\n");
            }

            else if (isspace(str[i])) {
                printf("Space found.\n");
            }
        }
    }

    (flag) ? puts("Entry valid.\n") : puts("Entry invalid.\n");

    return 0;
}
