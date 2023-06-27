#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int n1, n2, r1, r2;
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    scanf("%d", &n2);
    r1 = (n1 > n2) && (n1 != n2);
    r2 = !(n1 > n2);
    printf("%d > %d e %d != %d o resultado é %d \n", n1, n2, n1, n2, r1);
    printf("Negação de (%d > %d) o resultado é %d \n", n1, n2, r2);
}
