#include <stdio.h>

int main ()
{
    for (int i = 1; i <= 200; i++) {
        if (i % 3 != 0 && i % 5 != 0) {
            printf("%d", i);
        }
    }
    printf("\n");

    return 0;
    
}
