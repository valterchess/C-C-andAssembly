#include <stdio.h>
int main()
{
    double saldo;
    printf("informe o valor que deseja calcular: ");
    scanf("%f\n", saldo);
    printf("Com o reajuste o saldo atual é de %f", saldo += (saldo*0.01));
    return;
}
