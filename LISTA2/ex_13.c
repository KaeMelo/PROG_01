#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um número entre 1 e 50: ");
        scanf("%d", &numero);

        if (numero < 1 || numero > 50) {
            printf("Número inválido. Digite novamente.\n");
        }
    } while (numero < 1 || numero > 50);

    printf("Número digitado: %d\n", numero);

    return 0;
}
