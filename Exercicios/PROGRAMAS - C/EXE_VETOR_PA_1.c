#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
setlocale(LC_ALL,"");
int num, r, v[10], in, x, lim, soma;

    printf("*** Progressão Aritmética ***\n");
    printf("Digite um valor inicial: "); scanf("%d", &num);
    printf("Difina uma razão: "); scanf("%d", &r);
    printf("Quantidade de elementos da PA: "); scanf("%d", &lim);
    v[0] = num;
    for(in = 0;in <= lim-1;in++){
        soma += v[in];
        for(x = in + 1;x <= lim -1;x++){
        v[x] = v[in] + r;
        }}
    printf("\nOs elementos da P.A:\n");
    for(in =0;in <= (lim-1);in++){
    printf("%d   ", v[in]);
    }
    printf("\nA soma dos elementos da PA: %d\n", soma);
}
