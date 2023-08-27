#include <stdio.h>

int main ()
{
    int num1 , num2, num3;

    printf("DIGITE O PROMEIRO NÚMERO; ");
    scanf("%d", &num1);

    printf("DIGITE O SEGUNDO NÚMERO: ");
    scanf("%d", &num2);

    printf("DIGITE O TERCEIRO NÚMERO: ");
    scanf("%d", &num3);

    int maior = num1;

    if (num2 > maior){
        maior = num2;
    }

    if (num3 > maior){
        maior = num3;
    }

    int menor = num1;

    if (num2 < menor){
        menor = num2;
    }

    if (num3 < menor){
        menor = num3;
    }

    printf("O MAIOR NÚMERO DIGITADO É: %d\n", maior);
    printf("O MENOR NÚMERO DIGITADO É: %d\n", menor);

    return 0;
}