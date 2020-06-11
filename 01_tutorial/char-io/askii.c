#include <stdio.h>

main()
{
    int c;

    for (c = 0; c <= 32; c = c + 1) {
        printf("%3d %c  ", c, c);
        printf("%3d %c  ", (c+32), (c+32));
        printf("%3d %c  ", (c+64), (c+63));
        printf("%3d %c\n", (c+96), (c+96));
    }    
}   
