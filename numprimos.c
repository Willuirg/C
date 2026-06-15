#include <stdio.h>
#include <math.h>


int ehPrimo(int num) {
    if (num < 2) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    
    printf("=== Classificador de Números Primos ===\n");
    printf("Escolha um número para classificar:\n");
    printf("1 - Número 2\n");
    printf("2 - Número 5\n");
    printf("3 - Número 9\n");
    printf("4 - Outro número\n\n");
    
    int opcao;
    printf("Escolha a opção (1-4): ");
    scanf("%d", &opcao);
    
    switch(opcao) {
        case 1:
            num = 2;
            break;
        case 2:
            num = 5;
            break;
        case 3:
            num = 9;
            break;
        case 4:
            printf("Digite o número: ");
            scanf("%d", &num);
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }
    
    printf("\n--- Análise do número %d ---\n", num);
    
    if (num == 2) {
        printf("2 = Único número primo par!\n");
    } else if (num == 5) {
        printf("5 = Número primo\n");
    } else if (num == 9) {
        printf("9 = Número composto\n");
    } else if (ehPrimo(num)) {
        printf("%d é um número PRIMO.\n", num);
    } else {
        printf("%d NÃO é um número primo.\n", num);
    }
    
    return 0;
}
