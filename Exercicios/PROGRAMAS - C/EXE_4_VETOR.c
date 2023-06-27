#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
setlocale(LC_ALL,"");
int v1[5], in, aux, x, v2[5];

    for(in = 0;in <= 4;in++){
        printf("Digite um elemento na %dª posição: ", in); scanf("%d", &v1[in]);
        }
    for(in=0;in<=3;in++){
        for(x=in+1;x<=4;x++){
            if(v1[in] > v1[x]){
                aux = v1[in]; v1[in] = v1[x]; v1[x] = aux;
                }
            }
        }
    printf("\nVetor 1 Ordenado\n");
        for(in = 0;in <= 4;in++){
            printf("%d  ", v1[in]);
        }
    printf("\n\nVetor 2\n");
    for(in = 0;in <= 4;in++){
        printf("Digite um elemento na %dª posição: ", in); scanf("%d", &v2[in]);
        }
    for(in=0;in<=3;in++){
        for(x=in+1;x<=4;x++){
            if(v2[in] > v2[x]){
                aux = v2[in]; v2[in] = v2[x]; v2[x] = aux;
                }
            }
        }
    printf("\nVetor 2 Ordenado\n");
    for(in=0;in<=4;in++)
    {
        printf("%d  ", v1[in]);
    }
    for(in=0;in<=3;in++)
    {
        for(x=in+1;x<= 4;x++)
        {

        }
    }
}
