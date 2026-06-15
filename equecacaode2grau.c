#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
float a, b, c, delta, x1, x2;
printf("Digite o coeficiente a: ");
scanf("%f", &a);
printf("Digite o coeficiente b: ");
scanf("%f", &b);
printf("Digite o coeficiente c: ");
scanf("%f", &c);

if (a == 0) {
    printf("Erro: O coeficiente 'a' não pode ser zero!\n");
    return 1;
}

delta = b * b - 4 * a * c;

printf("Delta (Δ) = %.2f\n", delta);

if (delta < 0) {
    printf("A equação não tem raízes reais.\n");
} else {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("As raízes são: %.2f e %.2f\n", x1, x2);
}

return 0;
}