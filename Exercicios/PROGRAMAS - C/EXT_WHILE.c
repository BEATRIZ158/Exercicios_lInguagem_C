#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int cont, num;

    printf("Contador Num�rico!\n"); printf("Digite um n�mero limite: "); scanf("%d", &num);
    printf("#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#\n");
    cont = 1;

    while(cont <= num)
    {
    printf("N�mero:%d\n", cont);
    cont ++;

    }
    printf("#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#\n");
}

