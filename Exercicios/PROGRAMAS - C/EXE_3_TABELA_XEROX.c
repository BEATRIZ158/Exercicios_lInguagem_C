#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
setlocale(LC_ALL,"");
float num, cal;
int in, x;

    printf("Digite um valor real: "); scanf("%f", &num);
    for(x=1;x <= 200;x++){
    for(in = 1;in <= 10;in++){
        cal = num*in;
        printf("%d = %.2f ", x, cal);
    }
    }
}
