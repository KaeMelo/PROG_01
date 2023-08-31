#include <stdio.h>

int main()
{
    int contador = 0;
    int numero = 1;

    printf("OS 10 PRIMEIROS MÚLYIPLOS COMUNS DE 4 E 6 SÃO: \n");

    while (contador < 10){
        if (numero % 4 == 0 && numero % 6 == 0) {
            printf("%d", numero);
            contador++;
        }
        numero++;
    }

    printf("\n");
    
    return 0;
}
