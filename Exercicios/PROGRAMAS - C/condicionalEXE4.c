#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int idade, carta;

    printf("Idade: ");
    scanf("%d", &idade);
    printf("Possui habilita��o:\n0 - N�O POSSUI\n1 - POSSUI\n");
    printf("Informe sua situa��o: ");
    scanf("%d", &carta);
    if (carta == 0)
    {
        printf("Voc� n�o pode dirigir o ve�culo\n");
    }
    else if (carta == 1)
    {
        printf("Voc� pode dirigir o ve�culo\n");
    }
    else
    {
        printf("Op��o inv�lida\n");
    }
}

