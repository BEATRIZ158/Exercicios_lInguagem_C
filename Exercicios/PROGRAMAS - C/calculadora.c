#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define PARE s

void main(){

    setlocale(LC_ALL,"");

    char nome[100], op[50], PARE;
    int con, ida;

    printf("#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    while (op != PARE){
        printf("Nome: ");
        fgets(nome, 100, stdin);

        printf("Idade:");
        scanf("%d", &ida);
    }
    printf("Quer continuar?(S/N)");
    fgets(op, 1, stdin);
}
