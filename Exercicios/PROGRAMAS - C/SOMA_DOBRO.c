#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma_dobro(int x, int y, int z)
{
    setlocale(LC_ALL,"");
    int s;
    x = x * 2; y = y * 2; z = z * 2;
    s = x + y + z;
    return s;
}

void main()
{
    int r, a, b, c;
    printf("Digite o primeiro valor: "); scanf("%d", &a);
    printf("Digite o segundo valor: "); scanf("%d", &b);
    printf("Digite o terceiro valor: "); scanf("%d", &c);
    r = soma_dobro(a,b,c);
    printf("A resultado da soma = %d\n", r);
    printf("o valor de A = %d, B = %d e C = %d\n", a, b, c);
}
