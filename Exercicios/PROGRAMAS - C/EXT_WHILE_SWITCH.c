#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int num, num1, cal, op;
    char car;

    printf("Digite um número: "); scanf("%d", &num);
    printf("Digite outro número: "); scanf("%d", &num1);
    printf("#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#\n");
    printf("Opções:\n[1] Adição\n[2] Subtração\n[3] Multiplicação\n[4] Divisão\n[5] Fim Do Programa\nEscolha uma opção (1,2,3,4 ou 5):"); scanf("%d", &op);
    printf("#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#\n");

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
    printf("O resultado é:\n%d %c %d = %d\n", num, car, num1, cal);
    printf("#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#\n");
}
