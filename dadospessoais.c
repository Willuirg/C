// Bibliotecas padrão necessárias para entrada, saída e manipulação de strings.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    // Declaração das variáveis usadas para armazenar os dados pessoais.
    char nome[30], profissao, endereco, cidade, estado, pais, estado_civil, cor_pele;
    int idade, telefone;

    // Leitura do telefone.
    printf("Informe o sue telefone: ");
    scanf("%d", &telefone);

    // Leitura da idade.
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // Limpeza do buffer para permitir a leitura correta de strings com fgets().
    while(getchar()!='\n');
    printf("Informe seu nome completo: ");
    fgets("%s", sizeof(nome), stdin);

    // Leitura da profissão.
    printf("Informe sua profissão: ");
    fgets("%s", sizeof(profissao), stdin);

    // Leitura do endereço.
    printf("Informe o seu endereço: ");
    fsgets("%s", sizeof(endereco), stdin);

    // Leitura da cidade.
    printf("Informe sua cidade: ");
    fgets("%s", sizeof(cidade), stdin);

    // Leitura do estado.
    printf("Informe seu estado: ");
    fgets("%s", sizeof(estado), stdin);

    // Leitura do país.
    printf("Informe seu país: ");
    fgets("%s", sizeof(pais), stdin);

    // Leitura do estado civil.
    printf("Informe seu estado civil: ");
    fgets("%s", sizeof(estado_civil), stdin);

    // Leitura da cor de pele.
    printf("Informe sua cor de pele: ");
    fgets("%s", sizeof(cor_pele), stdin);

    // Exibe todos os dados coletados.
    printf("O seu nome é: %s, sua profissão é: %s, seu endereço é: %s, sua cidade é: %s, seu estado é: %s, seu país é: %s, seu estado civil é: %s, sua cor de pele é: %s e sua idade é: %d e seu telefone é: %d", nome, profissao, endereco, cidade, estado, pais, estado_civil, cor_pele, idade, telefone);

}