#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    float valor, pagar;
    int op;

    printf("Informe o valor do produto: ");
    scanf("%f", &valor);
    printf("Formas de pagagamento\n1 -> a vista\n2 -> a prazo\n");
    printf("Sua escolha (1 ou 2): ");
    scanf("%d", &op);
    if (op == 1){
        pagar = valor-(valor*0.10);
        printf("O valor do produto a vista:R$ %.2f \n", pagar);
    }else{
        pagar = valor;
        printf("O valor do produto á prazo:R$ %.2f \n", pagar);
    }
}
