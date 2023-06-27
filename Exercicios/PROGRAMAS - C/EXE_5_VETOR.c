#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
setlocale(LC_ALL,"");
int v[10], in, x, aux;

    for(in = 0;in <= 9;in++){
    printf("Digite um elemento para a [%d]ª posição: ", in); scanf("%d", &v[in]);
    }
    for(in = 0;in <= 9;in++){
        for(x = in+1;x <= 9;x++){
            if(v[in] > v[x]){
            aux = v[in]; v[in] = v[x]; v[x] = aux;
            }}}
    printf("\nVetor ordenado de forma crescente: \n");
    for(in = 0;in <= 9;in++){
    printf("%d ", v[in]);
    }
    printf("O menor valor é %d\n", v[0]);
    printf("O maior valor é %d\n", v[9]);
}
