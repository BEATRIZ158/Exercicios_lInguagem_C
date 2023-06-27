#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int valor, *end;

    valor = 5;
    end = &valor;
    printf("O endereço da vairável é: %d\n", &valor);
    printf("O endereço da variável é: %d\n", end);
    printf("Valor: %d\n", *end);
}
