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
    cont ++; num += 2;
    printf("O dobro do número %d = %d\n", cont, num);
    }while(cont <= 9);
}
