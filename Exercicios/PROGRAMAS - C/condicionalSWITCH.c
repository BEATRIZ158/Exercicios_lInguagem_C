#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int idade, carta;

    printf("Idade: ");
    scanf("%d", &idade);
    printf("Possui carteira de habilitação:\n0 - NÃO POSSUI\n1 - POSSUI\n");
    printf("Sua situação(0 e 1): ");
    scanf("%d", &carta);
    switch(carta)
    {
    case(0):
        printf("Não pode dirigir o veículo!\n");
        break;
    case(1):
        printf("Pode dirigir o veículo!\n");
        break;
    default:
        printf("Opção inválida!\n");
    }
}
