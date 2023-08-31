#include <stdio.h>

int main()
{
    int valor;

    do {
        printf("DIGITE UM VALOR ENTRE 1 E 100: ");
        scanf("%d", &valor);

        if (valor < 1 || valor > 100) {
            printf("VALOR FORA DO INTERVALO. TENTE NOVAMENTE.: ");
        }
    } while (valor < 1 || valor > 100);
    printf("VOCÊ DIGITOU UM VALOR VÁLIDO: %d\n", valor);

    return 0;
}
