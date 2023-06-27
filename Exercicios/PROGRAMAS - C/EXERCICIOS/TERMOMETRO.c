#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");
    int op;
    float cel, kel, fa;

    printf("-+++++- TERMOMETRO -+++++-\n");
    printf("Valor em celsius:°C");
    scanf("%f", &cel);
    printf("Tabela de conversão:\n[ 1 ] Celsius => Fahrenheit \n[ 2 ] Celsius => Kelvin\n[ 3 ] Desligar TERMOMETRO\n");
    scanf("%d", &op);
    if (op == 1){
        fa = (cel * 1.8) + 32;
        printf("Valor convertido de °C para °F: °F %.2f\n", fa);
    }else if (op == 2){
        kel = cel + 273,15;
        printf("Valor convertido de °C para °K: °K %.2f\n", kel);
    }else{
        printf("Desligando TERMOMETRO...");
    }
}
