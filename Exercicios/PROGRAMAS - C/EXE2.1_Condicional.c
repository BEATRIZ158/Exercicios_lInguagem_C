#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");
    int num, num_1;
    float total, total_1, tot;

    printf("Simulador de Gastos na Montagem de Festas!\n\nQuantidade de Peças:\n\nSuperior a 500 => unidade * R$40,00\nInferior a 500 => unidade * R$45,00\n");
    printf("\nQuantidade de Cadeiras: ");
    scanf("%d", &num);
    total = (num > 500)?(num * 40):(num * 45);
    printf("Quantidade de Mesas: ");
    scanf("%d", &num_1);
    total_1 = (num_1 > 500)?(num_1 * 40):(num_1 * 45);
    printf("Valor total das Cadeiras: R$ %.2f\nValor total das Mesas: R$ %.2f\n", total, total_1);
    tot = total + total_1;
    printf("Valor total da Festa: R$ %.2f\n", tot);

}
