// define.c

#include <stdio.h>

// Define constant text values
#define LINE "___________________________"
#define TITLE "C Programming in easy steps"
#define AUTHOR "Mike McGrath"

// Conditional macro to identify Windows
#ifdef _WIN32
#define SYSTEM "Windows"
#endif

// Conditional macro to identity Linux
#ifdef linux
#define SYSTEM "Linux"
#endif

int main(void)
{
    printf("\n\t %s \n \t %s \n", LINE, TITLE);
    printf("\t by %s \n \t %s \n", AUTHOR, LINE);
    printf("\n Operating System: %s \n", SYSTEM);

    return 0;
}