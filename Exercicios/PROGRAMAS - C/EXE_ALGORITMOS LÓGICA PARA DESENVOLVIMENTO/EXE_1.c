#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    char nomes[10][25];
    int l;

    for(l = 0;l < 10;l++){
        printf("Digite o nome da %d pessoa: ", l); scanf("%25[^\n]", nomes[l]);
        scanf("%c");
    }
    printf("\nNomes das pessoas cadastradas:\n");
    for(l = 0;l < 10;l++){
        printf("\nNome da %d pessoa: %s\n", l, nomes[l]);
    }
}
