#include <stdio.h>
int main()
{
    float a, b, c, media = 0;
    printf("informe um número positivo: ");
    scanf("%f\n", a);
    printf("informe outro número positivo: ");
    scanf("%f\n", b);
    printf("informe o último número positivo: ");
    scanf("%f\n", c);
    media = (a + b + c) / 3;
    printf("A média números informados é: %f\n", media);
    return;
}