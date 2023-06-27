#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int idade, carta;

    printf("Idade: ");
    scanf("%d", &idade);
    printf("Possui habilitação:\n0 - NÃO POSSUI\n1 - POSSUI\n");
    printf("Informe sua situação: ");
    scanf("%d", &carta);
    if (carta == 0)
    {
        printf("Você não pode dirigir o veículo\n");
    }
    else if (carta == 1)
    {
        printf("Você pode dirigir o veículo\n");
    }
    else
    {
        printf("Opção inválida\n");
    }
}

