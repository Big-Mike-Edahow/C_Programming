// bitflag.c

#include <stdio.h>

int main()
{
    int flags = 8;          // Binary 1000 ( 1x8 0x4 0x2 0x1)

    flags = flags | 2;      // 1000 | 1010 (decimal 10)

    printf("Flag 1: %s\n", ((flags & 1) > 0) ? "ON" : "OFF");
    printf("Flag 2: %s\n", ((flags & 2) > 0) ? "ON" : "OFF");
    printf("Flag 3: %s\n", ((flags & 4) > 0) ? "ON" : "OFF");
    printf("Flag 4: %s\n\n", ((flags & 8) > 0) ? "ON" : "OFF");

    char mask = 15;         // Binary 00001111
    flags = ~flags & mask;  // ~(1010 & 1111=1010) = 0101
    
    printf("Flag 1: %s\n", ((flags & 1) > 0) ? "ON" : "OFF");
    printf("Flag 2: %s\n", ((flags & 2) > 0) ? "ON" : "OFF");
    printf("Flag 3: %s\n", ((flags & 4) > 0) ? "ON" : "OFF");
    printf("Flag 4: %s\n", ((flags & 8) > 0) ? "ON" : "OFF");

    printf("\nFlags decimal value is: %d\n", flags);
    flags = flags << 1;     // 0101 << 1 = 1010
    printf("Flags decimal value is now %d\n", flags);

    return 0;
}
