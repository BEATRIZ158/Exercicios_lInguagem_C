#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
setlocale(LC_ALL,"");
int in, a[5], b[5], c[5];

    printf("Preencha a Matriz A:\n");
    for(in = 0;in <= 4;in++){
    printf("Elemento da %dª posição: ", in); scanf("%d", &a[in]);
    }printf("\nPreencha a Matriz B:\n");
    for(in = 0;in <= 4;in++){
    printf("Elemento da %dª posição: ", in); scanf("%d", &b[in]);
    }for(in = 0;in <= 4;in++){
    c[in] = a[in] - b[in];
    }printf("\nMatriz C:\n");
    for(in = 0;in <= 4;in++){
    printf("\n%d - %d = %d", a[in], b[in], c[in]);
    }
}
