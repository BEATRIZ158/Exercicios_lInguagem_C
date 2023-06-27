#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int res;
    printf("Digite \n1 - Sim \n0 - Não");
    printf("\nDeseja abrir a calculadora?");
    scanf("%d", res);
    if (res == 1){
        system("calc");
    }
    else{
        printf("Não quer abrir a calculadora? Que pena. Até Logo...");
    }
}
