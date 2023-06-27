#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
setlocale(LC_ALL,"");
char nome1[5][20], nome2[5][20], nome3[10][20];
int l, x;

    printf("Preencha o vetor A:\n");
    for(l = 0;l < 5;l++){
    printf("Seu nome: "); scanf("%20[^\n]", nome1[l]);
    scanf("%c");
    }printf("\nPreencha o vetor B:\n");
    for(l = 0;l < 5;l++){
    printf("Seu nome: "); scanf("%20[^\n]", nome1[l]);
    scanf("%c");
    }x = 0;
    for(l = 0;l <= 9;l++){
        nome3[x] = nome1[l];x++;
        nome3[x] = nome2[l];x++;
 }
  for(l = 0;l <= 9;l++){
        printf("%dª nome: %s\n", nome3[l]);
        }
}
