#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um número maior ou igual a 1: ");
        scanf("%d", &numero);

        if (numero < 1) {
            printf("Número inválido. Digite novamente.\n");
        }
    } while (numero < 1);

    printf("Número digitado: %d\n", numero);

    return 0;
}
