#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
setlocale(LC_ALL,"");
int va[5], vb[5], vc[5], vd[15], in;

printf("Preencha o vetor A:\n");
for(in = 0;in < 5;in++){
printf("Vetor A, %d� posi��o: ", in); scanf("%d", &va[in]);
}printf("\nPreencha o vetor B:\n");
for(in = 0;in < 5;in++){
printf("Vetor B, %d� posi��o: ", in); scanf("%d", &vb[in]);
}printf("\nPreencha o vetor C:\n");
for(in = 0;in < 5;in++){
printf("Vetor C, %d� posi��o: ", in); scanf("%d", &vb[in]);
}
}
