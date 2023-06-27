#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int cont, num;

    cont, num = 0;

    do
    {
    cont ++; num += cont;
    }while(cont <= 9);
    printf("A soma de 1 a 10 = %d\n", num);
}
