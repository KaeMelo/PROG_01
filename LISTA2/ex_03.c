#include <stdio.h>

int main()
{
    int numero, tentativa, tentativas = 0;

    printf("PRIMEIRO USUÁTRIO, DIGITE UM NÚMERO: ");
    scanf("%d", &numero);

    printf("SEGUNDO USUÁRIO, ADIVINHE O NÚMERO DIGITADO ANTERIORMENTE: ");
    do {
          scanf("%d", &tentativa);
          tentativas++;

          if (tentativa < numero) {
            printf("TENTE UM NÚMERO MAIOR: ");
          } else if (tentativa > numero) {
            printf("TENTE UM NÚMERO MENOR: ");
    } else {
        printf("VOCÊ ADIVINHOU O NÚMERO %d EM %d TENTATIVAS. \n", numero, tentativa); 
    }

} while (tentativa != numero);

    return 0;
}
