#include <stdio.h>

int main() {
    char conceito;

    printf("Digite o conceito do aluno: ");
    scanf(" %c", &conceito);

    switch (conceito) {
        case 'A':
            printf("Significado: Excelente\n");
            break;
        case 'B':
            printf("Significado: Ótimo\n");
            break;
        case 'C':
            printf("Significado: Bom\n");
            break;
        case 'D':
            printf("Significado: Regular\n");
            break;
        case 'E':
            printf("Significado: Ruim\n");
            break;
        case 'F':
            printf("Significado: Nos vemos ano que vem\n");
            break;
        default:
            printf("Conceito inexistente.\n");
    }

    return 0;
}