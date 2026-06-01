#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int idade;
    char nome[30];

    printf("informe a sua idade: ");
    scanf("%d", &idade);

    while(getchar()!='\n');
    printf("Informe seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome,"\n")]='\0';

    printf("O seu nume de usuário é: %s e sua idade é %d", nome, idade);

    return 0;

}