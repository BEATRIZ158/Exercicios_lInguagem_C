#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int multi(int x, int y)
{
    int c;
    c = x * y;
    return c;
}

void main()
{
    setlocale(LC_ALL,"");
    int a, b, r;
    printf("Digite o primeiro n�mero: "); scanf("%d", &a);
    printf("Digite o segundo n�mero: "); scanf("%d", &b);
    r = multi(a, b);
    printf("O resultado de %d x %d = %d\n", a, b, r);
}
