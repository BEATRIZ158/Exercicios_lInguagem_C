#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int f;
    float total;
    printf("Quantidade de Cópias: ");
    scanf("%d", &f);
    total = (f > 100)?(f*0.20):(f*0.25);
    printf("Total a ser pago:R$%.2f\n", total);
}
