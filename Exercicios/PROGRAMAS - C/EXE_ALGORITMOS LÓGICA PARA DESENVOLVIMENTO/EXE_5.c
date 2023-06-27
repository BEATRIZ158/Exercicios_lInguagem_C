#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
setlocale(LC_ALL,"");
int a[10], b[10], in, x=0, fat;

    for(in = 0;in < 10;in++){
    printf("Elemento da %dª posição: ", in); scanf("%d", &a[in]);
    }
    for(in = 0;in < 10;in++){
            b[in] = 1;
       for(x = a[in];x >= 1;x--){
        b[in] = x*b[in];
       }}
    printf("A matriz dos fatorias da Matriz A:\n");
    for(in = 0;in < 10;in++){
    printf("%d  ", b[in]);
    }
}
