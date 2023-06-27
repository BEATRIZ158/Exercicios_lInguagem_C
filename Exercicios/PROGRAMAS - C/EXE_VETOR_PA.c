#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
setlocale(LC_ALL,"");
int num, r, v[10], in, x;

    printf("*** Progressão Aritmética ***\n");
    printf("Digite um valor inicial: "); scanf("%d", &num);
    printf("Difina uma razão: "); scanf("%d", &r);
    v[0] = num;
    for(in = 0;in <= 9;in++){
        for(x = in + 1;x <= 9;x++){
        v[x] = v[in] + r;
        }}
    printf("\nOs primeiros 10 elementos da P.A:\n");
    for(in =0;in <= 9;in++){
    printf("%d  ", v[in]);
    }
}
