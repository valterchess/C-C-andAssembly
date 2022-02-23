#include<stdio.h>
int main(){
    float f1 = 2.5;
    printf("\nA variável f1 fica na posição %p, tem valor %f e ocupa %d posições",&f1, f1, sizeof(f1));

    short int i1 = 0x02FE;
    i1 += 4;
    printf("\nA variável i1 fica na posição %p, tem valor %d e ocupa %d posições",&i1,i1,sizeof(i1));
}