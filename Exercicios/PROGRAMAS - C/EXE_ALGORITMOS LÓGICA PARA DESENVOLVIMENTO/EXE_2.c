#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
setlocale(LC_ALL,"");
int a[8], b[8], in;

    printf("Preencha a sequência A:\n");
    for(in = 0;in < 8;in++){
    printf("Adicione um elemento na %dª posição: ", in); scanf("%d", &a[in]); b[in] = a[in] * 3;
    }
    printf("Sequencia A:\n");
    for(in = 0;in < 8;in++){
    printf("%2d  ", a[in]);
    }
    printf("\nSequencia B:\n");
    for(in = 0;in < 8;in++){
    printf("%2d  ", b[in]);
    }
}
