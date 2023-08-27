#include <stdio.h>

int main()
{
    int idade;

    printf("DIGITE SUA IDADE: ");
    scanf("%d", &idade);

    if (idade >= 18 && idade <= 70) {
        printf("VOCÊ É OBRIGATÓRIO A VOTAR. \n");
    } else if (idade < 16) {
        printf("VOCÊ NÃO PODE VOTAR. \n");
    } else {
        printf("SEU VOTO É FACULTATIVO. \n");
    }

    return 0;
}