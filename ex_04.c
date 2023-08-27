#include <stdio.h>

int main ()
{
    int idade;
    int sexo;
    int peso;

    printf("DIGITE SUA IDADE: ");
    scanf("%d", &idade);

    printf("DIGITE SEU SEXO (M PARA MASCULINO, F PARA FEMENINO): ");
    scanf("%d", &sexo);

    printf("DIGITE SEU PESO EM KG: ");
    scanf("%d", &peso);

    if (idade > 18 && idade < 67)
    {
        if ((sexo == 'M' || sexo == 'm') && peso > 60)
        {
            printf("Você está apto para doar sangue. \n");
        } else if ((sexo == 'F' || sexo == 'f') && peso > 50)
        {
            printf("Você está apto para doar sangue. \n");
        } else {
            printf("Você não está apto para doar sangue. \n");
        }
    } else {
        printf("Você não está apto para doar sangue por sua idade. \n");
    }

    return 0;
}