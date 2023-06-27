#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
setlocale(LC_ALL,"");
int m[3][3], l, c, soma;

printf("Informe os números para armazenar na matriz:\n");
for(l = 0;l <= 2;l++){
	for(c = 0;c <=2;c++){
	printf("Posição [%d][%d] = ", l, c); scanf("%d", &m[l][c]);
	}}
for(l = 0;l <= 2;l++){
    printf("\n");
	for(c = 0;c <=2;c++){
	printf("%2d   ", m[l][c]);
	if(m[l] == m[c]){
        soma+=m[l][c];
	}
	}printf("\n");
	}
printf("\nA soma dos valores da diagonal principal: %d\n", soma);
}
