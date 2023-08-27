#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    if ((caractere >= 'a' && caractere <= 'z') || (caractere >= 'A' && caractere <= 'Z')) {
        char lowercase = tolower(caractere);

        if (lowercase == 'a' || lowercase == 'e' || lowercase == 'i' || lowercase == 'o' || lowercase == 'u') {
            printf("É uma vogal.\n");
        } else {
            printf("É uma consoante.\n");
        }
    } else {
        printf("Não é uma letra.\n");
    }

    return 0;
}