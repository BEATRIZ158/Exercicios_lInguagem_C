#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");
    char nome[30], nome1[30];
    int i1, i2;

    printf("Nome Dos Usu�rios\n");
    printf("Nome do 1� Usu�rio: ");
    gets(nome);
    printf("Idade do 1� Usu�rio: ");
    scanf("%d", &i1);
    printf("O usu�rio %s tem %d anos! \n", nome, i1);

    printf("Nome do 2� Usu�rio: ");
    scanf("%s", nome1);
    printf("Idade do 2� Usu�rio: ");
    scanf("%d", &i2);
    printf("O usu�rio %s tem %d anos! \n", nome1, i2);
    system("pause");

}
