#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char text[80];
    printf("Digite seu texto: ");
    fgets(text, sizeof(text),stdin);
    text[strcspn(text,"\n")]='\0';
    printf("O texto digitado é: %s", text);
    return 0;
       
}