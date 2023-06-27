#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
setlocale(LC_ALL,"");
int a[5], b[5], c[10], in, x, aux;

printf("Preencha o vetor A\n");
for(in = 0;in <= 4;in++){
    printf("Elemento da %dª posição: ", in); scanf("%d", &a[in]);
}printf("\nPreencha o vetor B\n");
for(in = 0;in <= 4;in++){
    printf("Elemento da %dª posição: ", in); scanf("%d", &b[in]);
    }
x = 0;
for(in = 0;in <= 4;in++){
        c[x] = a[in];x++;
        c[x] = b[in];x++;
 }
 for(in = 0;in <= 9;in++){
        for(x = in+1;x <= 9;x++){
            if(c[in] > c[x]){
            aux = c[in];c[in] = c[x];c[x] = aux;
            }}}
printf("\nMatriz C\n");
for(in = 0;in <= 9;in++){
    printf("Elemento da %dª posição: %d\n", in, c[in]);
}
}
