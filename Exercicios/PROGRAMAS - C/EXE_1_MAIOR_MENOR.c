#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int v1[15], in, x, aux;

    for(in = 0;in <= 14;in++)
    {
        printf("Digite um valor para a [%d]ª posição: ", in); scanf("%d", &v1[in]);
    }
     printf("\nOs valores digitados foram:\n");
    for(in = 0;in <= 14;in++){
        printf("%d  ", v1[in]);
    }
    for(in = 0;in <= 14;in++){
      for(x = in+1;x <= 14;x++){
          if(v1[in] > v1[x]){
            aux = v1[in]; v1[in] = v1[x]; v1[x] = aux;
          }
      }
    }
    printf("\nO maior valor encontrado foi: %d\n", v1[14]);
    printf("\nO menor valor encontrado foi: %d\n", v1[0]);
}
