#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int nu, c;

    c = 0;
    printf("+-+-+-+-+ Contador Numérico! +-+-+-+-+\n");
    printf("Digite um número:");
    scanf("%d", &nu);
    while (c < nu){
        c = c + 1;
        printf("Número => %d\n", c);
    }
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+");
}
