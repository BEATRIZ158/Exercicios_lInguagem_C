#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int num, cont, cal;

    printf("#=#=#=#=#=#=# TABUADA DA MULTIPLICAÇÃO #=#=#=#=#=#=#\n");
    printf("Número Escolhido: ");
    scanf("%d", &num);
    printf("#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    cont = 0;
    if (num > -1)
    {
        while (cont <= 9)
        {
        cont = cont + 1;
        cal = cont * num;
        printf("%d x %d = %d\n", cont, num, cal);
        }
    printf("#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    printf("FIM DA TABUADA!!!");
    }
}
