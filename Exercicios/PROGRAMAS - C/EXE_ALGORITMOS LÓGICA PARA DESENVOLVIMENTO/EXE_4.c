#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
setlocale(LC_ALL,"");
int t, a[t], b[t], in;

    printf("Qual ser� o tamanho da sequ�ncia: "); scanf("%d", &t);
    printf("\nMatriz A:\n");
    for(in = 0;in <= (t-1);in++){
    printf("Digite o %d� elemento da Matriz: ", in); scanf("%d", &a[in]);
    }
    for(in = 0;in <= (t-1);in++){
    b[in] = pow(a[in], a[in]);
    }printf("\nMatriz B:\n");
    for(in = 0;in <= (t-1);in++){
    printf("%d  ", b[in]);
    }
}
