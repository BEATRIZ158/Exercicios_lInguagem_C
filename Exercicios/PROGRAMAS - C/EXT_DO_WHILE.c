#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int num, num1, cal, op;
    char car;

    printf("Digite um n�mero: "); scanf("%d", &num);
    printf("Digite outro n�mero: "); scanf("%d", &num1);
    printf("Op��es:\n[1] Adi��o\n[2] Subtra��o\n[3] mUltiplica��o\n[4] Divis�o\n[4] Fim Do Programa\nEscolha uma op��o (1,2,3,4 ou 5):");
    scanf("%d", &op);

    switch (op){
        case 1:
            cal = num + num1;
            car = '+';
            break;
        case 2:
            cal = num - num1;
            car = '-';
            break;
        case 3:
            cal = num * num1;
            car = '*';
            break;
        case 4:
            cal = num / num1;
            car = '/';
            break;
        default:
            printf("Fim do Programa\n");
            break;
            }
    printf("%d %c %d = %d\n", num, car, num1, cal);
}
