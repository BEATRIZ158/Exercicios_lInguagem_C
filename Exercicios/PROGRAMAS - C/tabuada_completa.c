#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int cont, op;
    float cal, num;

    printf("#=#=#=#=#=#=# TABUADA 1 AO 10 #=#=#=#=#=#=#\n");
    printf("N�mero Escolhido: ");
    scanf("%f", &num);
    printf("#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");

    printf("Tabela De Op��es:\n[ 1 ] Adi��o\n[ 2 ] Subtra��o\n[ 3 ] Multiplica��o\n[ 4 ] Divis�o\n");
    printf("Op��o Escolhida:");
    scanf("%d", &op);
    cont = 0;

    if (op == 1){
        while (cont <= 9){
        cont += 1;
        cal = cont + num;
        printf("%d + %.2f = %.2f \n", cont, num, cal);
        }
    }
    else if (op == 2){
        while (cont <= 9){
        cont += 1;
        cal = cont - num;
        printf("%d - %.2f = %.2f \n", cont, num, cal);
        }
    }
    else if (op == 3){
        while (cont <= 9){
        cont += 1;
        cal = cont * num;
        printf("%d X %.2f = %.2f \n", cont, num, cal);
    }
    }
    else if (op == 4){
        while (cont <= 9){
        cont += 1;
        cal = cont / num;
        printf("%d / %.2f = %.2f \n", cont, num, cal);
    }
    }
    else{
        printf("N�mero Inv�lido. Tente Novamente!\n");
    }
}
