#include <stdio.h>

int main()
{
    int numero;

    printf("DIGITE UM NÚMERO INTEIRO: ");
    scanf("%d", &numero);

    printf("SEQUÊNCIA CRESCENTE: ");
    for (int i = 1; i <= numero; i++){
        printf("%d", i);
    }

    printf("\n");

    printf("SEQUÊNCIA DECRESCENTE: ");
    for (int i = numero; i >= 1; i--){
        printf("%d", i);
    }

    printf("\n");

    return 0;
}
