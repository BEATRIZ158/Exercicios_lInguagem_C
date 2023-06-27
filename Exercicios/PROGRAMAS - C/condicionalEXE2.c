#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    float num, total;

    printf("Informe o número de cadeiras que ira comprar: ");
    scanf("%f", &num);
    total = (num > 50)?(num * 40):(num * 45);
    printf("O total a pagar é:R$ %.2f \n", total);
}
