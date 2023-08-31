#include <stdio.h>
#include <string.h>

int main() {
    char senha_inicial[50];
    char senha_digitada[50];

    printf("Digite a senha inicial: ");
    scanf("%s", senha_inicial);

    printf("Digite a senha: ");
    scanf("%s", senha_digitada);

    if (strcmp(senha_inicial, senha_digitada) == 0) {
        printf("Senha incorreta.\n");
    } else {
        printf("Senha correta.\n");
    }

    return 0;
}
