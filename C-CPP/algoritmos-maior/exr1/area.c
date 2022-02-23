#include <stdio.h>
void main()
{
    double lado, area;
    printf("Informe o comprimento dos lados do quadrado:");
    scanf("%f\n", &lado);
    area = lado * lado;
    printf("A area do quadrado é:  %f\n", area);
    return;
}