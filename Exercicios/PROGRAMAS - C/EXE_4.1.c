#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    float n1, n2, cal;
    int op;
    char re;

    printf("+-+-+-+-+-+ Calculadora! +-+-+-+-+-+\n");
    printf("\nPrimeiro N�mero: ");
    scanf("%f", &n1);
    printf("Segundo N�mero: ");
    scanf("%f", &n2);
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+");
    printf("\nFun��es da calculadora:\n[ 1 ] Adi��o\n[ 2 ] Subtra��o\n[ 3 ] Multiplica��o\n[ 4 ] Divis�o\n[ 5 ] Desligar\n");
    printf("Op��o escolhida: ");
    scanf("%d", &op);
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    switch (op){
        case (1):
        cal = n1 + n2;
        printf("O resultado de %.2f + %.2f = %.2f\n", n1, n2, cal);
        break;

        case (2):
        cal = n1 - n2;
        printf("O resultado de %.2f - %.2f = %.2f\n", n1, n2, cal);
        break;

        case (3):
        cal = n1 * n2;
        printf("O resultado de %.2f * %.2f = %.2f\n", n1, n2, cal);
        break;

        case (4):
        cal = n1 / n2;
        printf("O resultado de %.2f / %.2f = %.2f\n", n1, n2, cal);
        break;

        case (5):
        printf("Desligando Calculadora...");
        break;

        default:
        printf("Op��o inv�lida! Tente Novamente.");
    }
}
