#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
setlocale(LC_ALL,"");
int va[10], vb[10], in, x;

for(in = 0;in < 10;in++){
    printf("Preencha a %dª posição: ", in); scanf("%d", &va[in]);
}x = 0;
for(in = 9;in >= 0;in--){
    vb[in] = va[x]; x++;
}printf("\nVetor A invertido:\n");
for(in = 0;in < 10;in++){
printf("%d  ", vb[in]);
}
}
