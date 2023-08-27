#include <stdio.h>

int main() {
    int dia, mes;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mês: ");
    scanf("%d", &mes);

    if (mes < 1 || mes > 12) {
        printf("Mês inválido.\n");
    } else {
        int dias_no_mes;

        switch (mes) {
            case 2: 
                dias_no_mes = 28;
                break;
            case 4: case 6: case 9: case 11: 
                dias_no_mes = 30;
                break;
            default: 
                dias_no_mes = 31;
                break;
        }

        if (dia < 1 || dia > dias_no_mes) {
            printf("Dia inválido para o mês %d.\n", mes);
        } else {
            printf("Data válida.\n");
        }
    }

    return 0;
}