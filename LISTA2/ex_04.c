#include <stdio.h>

int main()
{
    int numero;

    printf("DIGITE UM NÚMERO: ");
    scanf("%d", &numero);

    for (int i = numero; ; i++) {
        if (i % 3 != 0) {
            printf("%d", i);
        }

        if (i % 10 == 0) {
            break;
        }
    }

    return 0;
}
