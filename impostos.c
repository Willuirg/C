#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    float inss, trasnporte, sindicato, fgts, salario;
    printf("Digite o valor do seu salário; ");
    scanf("%f", &salario);
    
    char opcao;
    printf("Escolha a opção de desconto: INSS, Transporte, Sindicato ou FGTS"); 
    scanf(" %c", &opcao);

    switch(opcao)
    {
        case 'I':
            inss = salario * 0.11;
            printf("O valor do desconto do INSS é: %2f\n", inss);
            break;
        case 'T':
            trasnporte = salario * 0.06;
            printf("O valor do desconto do transporte é: %2f\n", trasnporte);
            break;
        case 'S':
            sindicato = salario * 0.01;
            printf("O valor do desconto do sindicato é: %2f\n", sindicato);
            break;
        case 'F':
            fgts = salario * 0.08;
            printf("O valor do desconto do FGTS é: %2f\n", fgts);
            break;
        default:
            printf("Opção inválida. Use I, T, S ou F.\n");
            break;
    }
    return 0;
}