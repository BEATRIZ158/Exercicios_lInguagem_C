#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");
    int op, um, dois;
    float res, res1;
    printf("Digite um número:");
    scanf("%d", &um);
    printf("Digite um segundo número:");
    scanf("%d", &dois);
    printf("**********Calculadora Simples**********\n");
    printf("Pressione:\n[ 1 ] Adição\n[ 2 ] Subtração\n[ 3 ] Raiz Quadrada\n[ 4 ] Divisão\n");
    printf("Opção escolhida?");
    scanf("%d", &op);
    if (op == 1){
        res = um + dois;
        printf("%d + %d = %.2f\n", um, dois, res);
    }else if (op == 2){
        res = um - dois;
        printf("%d - %d = %.2f\n", um, dois, res);
    }else if (op == 3){
            res = um / 2;
            res1 = dois / 2;
            printf("A raiz quadrada de %d = %.2f e %d = %.2f\n", um, res, dois, res1);
    }else{
        res = um / dois;
        printf("%d / %d = %.2f\n", um, dois, res);
    }
}
