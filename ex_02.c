#include <stdio.h>

int main ()
{
    int numero;

    printf("DIGITE UM NÚMERO INTEIRO: ");
    scanf("%d", &numero);

    if (numero == 0){
        printf("O NÚMERO É ZERO. \n");
    } else if (numero % 2 == 0){
        printf("O NÚMERO É PAR. \n");
    } else {
        printf("O NÚMERO É ÍMPAR. \n");
    }

    return 0;
    
}
