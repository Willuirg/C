#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    char operacao;
    printf("----- Escolha a opção -----\n");
    printf("   +   Para adição\n");
    printf("   -   Para subtração\n");
    printf("   *   Para multiplicação\n");
    printf("   /   Para divisão\n");
    printf("Escolha a sua operação:  ");
    scanf("%c",& operacao);
    
    if (operacao != "+" && operacao != "-" && operacao != "*" && operacao != "/" )
    {
        printf("Digite uma operação válida\n");
        return 0;
    }  

    float num1, num2, resultado;
    printf("Digite o primeiro número: ");
    scanf("%f", & num1);

    printf("Digite o segundo número: \n");
    scanf("%f",& num2);
    
    switch (operacao)
    {
        case '+':
            resultado = num1 + num2;
            printf("O resultado da operação entre %2f e %2f é %2f\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("O resultado da operação entre %2f e %2f é %2f\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("O resultado da operação entre %2f e %2f é %2f\n", num1, num2, resultado);
            break;
        case '/':
            if (num2 == 0)
            {
                printf("Erro: divisão por zero não é permitida.\n");
            }
            else
            {
                resultado = num1 / num2;
                printf("O resultado da operação entre %2f e %2f é %2f\n", num1, num2, resultado);
            }
            break;
        default:
            printf("Operação inválida. Use +, -, * ou /.\n");
            break;
    }

    return 0;
}