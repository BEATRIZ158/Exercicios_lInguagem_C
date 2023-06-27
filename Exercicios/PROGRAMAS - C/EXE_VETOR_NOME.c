#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

void main()
{
setlocale(LC_ALL,"");
char nome[10];
int in, res;

    printf("Digite seu nome: "); fgets(nome, 10, stdin);
    res = isspace(nome);
    for(in = 0;in <= 10;in++)
    {
        if(res[isspace(in)] = 0)
        {

        }
    }
}
