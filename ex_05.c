#include <stdio.h>

int main()
{
    int lado1, lado2, lado3;
    
    printf("DIGITE O VALOR DO PRIMEIRO LADO: ");
    scanf("%f", &lado1);

     printf("DIGITE O VALOR DO SEGUNDO LADO: ");
    scanf("%f", &lado2);

     printf("DIGITE O VALOR DO TERCEIRO LADO: ");
    scanf("%f", &lado3);

    if (lado1 == lado2 && lado2 == lado3) {
    printf("TRIâNGULO EQUILÁTERO.\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("TRIâNGULO ISÓRCELES.\n");
    } else{
        printf("TRIÂNGULO EQUILÁTEROO.\n");
    }

    return 0;
}