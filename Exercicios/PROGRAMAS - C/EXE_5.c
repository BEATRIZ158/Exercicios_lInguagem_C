#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int seg, dias, hor, min;

    printf("Conversor de Segundos!\nQuantidade de segundo:"); scanf("%d", &seg);
    min =  seg / 60;  // Quant. Segundos dividido por minutos convertidos em seg
    hor = seg / 3600; // Quant. segundos dividido por horas convertidos em seg
    dias = seg / 86400; // qunt. segundo dividido por dias convertidos em seg

    printf("Minutos: %d\n", min); printf("Horas: %d\n", hor); printf("Dias: %d\n", dias);
}

