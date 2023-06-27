#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
setlocale(LC_ALL,"");
int v1, v2, r;

    printf("***** Algoritmo de Euclides! *****\n");
    printf("Digite um primeiro valor: "); scanf("%d", &v1);
    printf("Digite um segundo valor: "); scanf("%d", &v2);
    while(v2 != 0)
    {
    r = (v1 % v2);
    v1 = v2; v2 = r;
    }
    while(v2 != 0)
    {
    r = (v1 % v2);
    v1 = v2; v2 = r;
    }
    printf("MDC => %d\n", v1);
}
