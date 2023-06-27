#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int cont, num;
    cont, num = 0;

    for(; cont <= 9; cont ++, num += cont)
    {
    }
    printf("A soma de 1 a 10 = %d\n", num);
}
