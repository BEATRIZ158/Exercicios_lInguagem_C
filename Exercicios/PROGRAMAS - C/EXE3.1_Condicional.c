#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");
    float valor, pagar, par;
    int op, qua_par, con;

    printf("Informe o valor do produto:R$ ");
    scanf("%f", &valor);
    printf("Formas de pagagamento:\n1 -> Á vista\n2 -> Á prazo\n");
    printf("Sua escolha (1 ou 2): ");
    scanf("%d", &op);
    if (op == 1){
        pagar = valor-(valor*0.10);
        printf("O valor do produto á vista:R$ %.2f \n", pagar);
    }else if (op == 2){
        pagar = valor;
        printf("Quantidade de parcelas: ");
        scanf("%d", &qua_par);
        printf("O valor do produto á prazo:R$ %.2f \n", pagar);
        printf("Valor das Parcelas:\n");
        con = 0;
        while (con < qua_par){
            con = con + 1;
            par = valor / qua_par;
            printf("%d - R$%.2f\n", con, par);
        }
    }else{
        printf("Forma de pagamento inválida! Tente Novamente.");
    }
}
