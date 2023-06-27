#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    float c, j, f;
    int m;

    printf("Capital:R$ ");
    scanf("%f", &c);
    printf("Taxa de Juros: ");
    scanf("%f", &j);
    printf("Periodo da aplicação(meses): ");
    scanf("%d", &m);
    f = c*pow(1+j/100, m);
    printf("Valor ao final do periodo de aplicação: R$%.2f\n", f);
}
