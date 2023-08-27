#include <stdio.h>

int main()
{
    float a, b, c;

    printf("DIGITE O VALOR DO LADO a: ");
    scanf("%f", &a);

    printf("DIGITE O VALOR DO LADO b: ");
    scanf("%f", &b);

    printf("DIGITE O VALOR DO LADO c: ");
    scanf("%f", &c);

    if (a + b > c && b + c > a && c + a > b) {
        printf("O TRIÂNGULO COM OS VALORES DIGITADOS EXISTE. \n");
    } else {
        printf("O TRIÂNGULO VOM OS VALORES DIGITADOS NÃO EXISTEM. \n");
    }

    return 0;
}