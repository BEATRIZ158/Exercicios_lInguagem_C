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
    printf("\nPrimeiro Número: ");
    scanf("%f", &n1);
    printf("Segundo Número: ");
    scanf("%f", &n2);
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+");
    printf("\nFunções da calculadora:\n[ 1 ] Adição\n[ 2 ] Subtração\n[ 3 ] Multiplicação\n[ 4 ] Divisão\n[ 5 ] Desligar\n");
    printf("Opção escolhida: ");
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
        printf("Opção inválida! Tente Novamente.");
    }
}
