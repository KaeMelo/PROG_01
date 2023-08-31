#include <stdio.h>

int main()
{
    char operacao;
    float num1, num2, resultado;

    do {
        printf("DIGITE A OPERAÇÃO (+, -, *, /) OU 'S' PARA SAIR: " );
        scanf("%c", &operacao);

        if (operacao == 'S' || operacao == 'S') {
            printf("ENCERRANDO CALCULADORA: ");
            break;
        }

        printf("DIGITE O PRIMEIRO NÚMERO: ");
        scanf("%f", &num1);

        printf("DIGITE O SEGUNDO NÚMERO: ");
        scanf("%f", &num2);

        switch (operacao) {
            case '+':
            resultado = num1 + num2;
            printf("RESULTADO: %.2f\n", resultado);
            break;

            case '-':
            resultado = num1 - num2;
            printf("RESULTADO: %.2f\n", resultado);
            break;
            
            case '*':
            resultado = num1 * num2;
            printf("RESULTADO: %.2f\n", resultado);
            break;
            
            case '/':
            if (num2 != 0){
                resultado = num1 / num2;
                printf("RESULTADO: %.2f\n", resultado);
                break;
            } else {
                printf("DIVISÃO POR ZERO NÃO É PERMITIDO: ");
            }
            break;
        default:
            printf("OPERAÇÃO INVÁLIDA: \n");
    }    
} while (1);
 
 return 0;

}
