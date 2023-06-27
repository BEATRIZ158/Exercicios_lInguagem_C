#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int cont, num;

    printf("Contador Numérico!\n"); printf("Digite um número limite: "); scanf("%d", &num);
    printf("#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#\n");
    cont = 1;

    while(cont <= num)
    {
    printf("Número:%d\n", cont);
    cont ++;

    }
    printf("#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#\n");
}

