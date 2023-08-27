#include <stdio.h>

int main()
{
    int a, b;

    printf("DIGITE O PRIMEIRO NÚMERO INTEIRO (a): ");
    scanf("%d", &a);

    printf("DIGITE O SEGUNDO NÚMERO INTEIRO (b): ");
    scanf("%d", &b);

    int diferenca = a - b;

    if (a == b){
        printf("OS NÚMEROS SÃO IGUAIS. \n");
    } else if (a > b){
        printf("O NÚMERO A É MAIOR QUE O NÉMERO B EM %d UNIDADES. \n", diferenca);
    } else {
        printf("O NÚMERO B É MAIOR QUE O NÚMERO A EM %d UNIDADES. \n", diferenca);
    }
    
    return 0;
}