#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int nu, c;

    c = 0;
    printf("+-+-+-+-+ Contador Num�rico! +-+-+-+-+\n");
    printf("Digite um n�mero:");
    scanf("%d", &nu);
    while (c < nu){
        c = c + 1;
        printf("N�mero => %d\n", c);
    }
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+");
}
