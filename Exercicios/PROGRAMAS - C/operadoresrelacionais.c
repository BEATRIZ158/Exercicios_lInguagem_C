#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int n1, n2, r1, r2;
    printf("Digite um n�mero: ");
    scanf("%d", &n1);
    printf("Digite outro n�mero: ");
    scanf("%d", &n2);
    r1 = (n1 > n2) && (n1 != n2);
    r2 = !(n1 > n2);
    printf("%d > %d e %d != %d o resultado � %d \n", n1, n2, n1, n2, r1);
    printf("Nega��o de (%d > %d) o resultado � %d \n", n1, n2, r2);
}
