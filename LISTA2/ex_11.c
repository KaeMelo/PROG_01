#include <stdio.h>

int main ()
{
    float numero, soma = 0;
    int contador = 0;

    printf("DIGITE NÚMEROS REAIS (DIGITE 0 PARA SAIR): ");

    do {
        scanf("%f", &numero);

        if (numero != 0) {
            soma += numero;
            contador++;
        }
    } while (contador != 0);

    if (contador > 0) {
        float media = soma / contador;
        printf("FORAM DIGITADOS %d NÚMEROS.\n", contador);
        printf("A MÉDIA DPS NÚMEROS É: %.2f\n", media);
    } else {
        printf("NENHUM NÚMERO FOI DIGITADO.\n");
    }
    
    return 0;
}
