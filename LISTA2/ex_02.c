#include <stdio.h>

int main()
{
    for (int i = 1; i <= 28; i += 3){
        printf("%d", i);
        if ( i < 28){
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
