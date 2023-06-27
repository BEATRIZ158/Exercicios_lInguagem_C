#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int v1[5], in, aux, x;

    for(in=0;in<=4;in++)
    {
    printf("Digite o elemento [%dª] posição: ", in); scanf("%d", &v1[in]);
    }
    for(in=0;in<=3;in++)
    {
        for(x=in+1;x<=4;x++)
        {
        if(v1[in] > v1[x]){
        aux = v1[in]; v1[in] = v1[x]; v1[x] = aux;
        }
        }
    }
    printf("\nVetor ordenado\n");
    for(in=0;in<=4;in++){
        printf("%d  ", v1[in]);
    }
}
