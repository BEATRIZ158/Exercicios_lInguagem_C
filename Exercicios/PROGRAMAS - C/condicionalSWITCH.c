#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int idade, carta;

    printf("Idade: ");
    scanf("%d", &idade);
    printf("Possui carteira de habilita��o:\n0 - N�O POSSUI\n1 - POSSUI\n");
    printf("Sua situa��o(0 e 1): ");
    scanf("%d", &carta);
    switch(carta)
    {
    case(0):
        printf("N�o pode dirigir o ve�culo!\n");
        break;
    case(1):
        printf("Pode dirigir o ve�culo!\n");
        break;
    default:
        printf("Op��o inv�lida!\n");
    }
}
