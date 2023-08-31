#include <stdio.h>

int main()
{
    int opcao;

    do {
        printf("MENU: \n");
        printf("1. OPÇÃO 1\n");
        printf("2. OPÇÃO 2\n");
        printf("0. SAIR \n");
        printf("DIGITE SUA OPÇÃO (0 OU 1): ");
        printf("%d", &opcao);

        if (opcao == 0 || opcao == 1) {
            switch (opcao)
            {
            case 0:
                printf("SAINDO DO PROGRAMA.\n");
                break;
            case 1:
                printf("VOCÊ SELECIONOU A OPÇÃO 1.\n");
                break;
            }
        } else {
            printf("OPÇÃO INVÁLIDA. POR FAVOR, ESCOLHA 0 OU 1.\n");
        }

    } while (opcao != 0);

    return 0;
    
}
