#include <stdio.h>
int main()
{
    int num, ante, suce;
    printf("informe um número: ");
    scanf("%d\n", num);
    int end = 0, p2 = 0;
    for (size_t i = num; i <= (num + 100); i++)
    {
        int div = 0;
        if (end == 0)
        {
            for (size_t j = num; j <= (num + 100); j++)
            {
                if (i % j == 0 && i != num)
                {
                    div++;
                }
            }
        }
        if (div == 2)
        {
            suce = i;
            end = 1;
        }
    }

    end = 0;

    if (num != 2)
    {

        for (size_t i = num; i <= 2; i--)
        {
            int div = 0;
            if (end == 0)
            {
                for (size_t j = num; j <= 2; j--)
                {
                    if (i % j == 0 && i != num)
                    {
                        div++;
                    }
                }
            }
            if (div == 2)
            {
                ante = i;
                end = 1;
            }
        }
    } else {
        printf("não há número primo antecessor à %d.", num);
        p2 = 1;
    }
    if (p2 = 0){
        printf("O número primo antecessor a %d é %d\n",num, ante);
    }
    printf("O número primo sucessor a %d é %d\n",num, suce);
}
