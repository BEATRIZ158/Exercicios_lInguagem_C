#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int cont, num;
    cont, num = 0;

    while(cont <= 9)
    {
    cont ++; num = num + cont;
    }
    printf("A soma de 1 a 10 = %d\n", num);
}
