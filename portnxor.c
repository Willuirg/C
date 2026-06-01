#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ent_a, ent_b;
    printf("Digite 0 para nível lógico baixo, ou 1 para nível lógico alto: ");
    scanf("%d", &ent_a);
    
    printf("Digite 0 para nível lógico alto, ou 1 para nível lógico alto: ");
    scanf("%d", &ent_b);
    
    if (ent_a == 1 && ent_b == 1){
        printf("O seu nível lógico é alto ou seja, ele é igual a 1");
    }
    else if ((ent_a == 0 && ent_b == 1)||
            (ent_a == 1 && ent_b == 0)){
                printf("Saída de baixo valor lógico, ou seja, igual á 0");
            }
            
    else {
        printf("Erro! favor digitar somente 0 ou 1!");
    }
    return 0;
}