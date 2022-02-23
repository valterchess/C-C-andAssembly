#include <stdio.h>
int main()
{
    double cent, fahren;
    printf("Informe a temperatura em graus centígrados: ");
    scanf("%f\n", &cent);
    fahren = (9 - cent + 160)  / 5;
    printf("A temperatura informada corresponde a %fº fahrenheit\n", fahren);
    return;
}
