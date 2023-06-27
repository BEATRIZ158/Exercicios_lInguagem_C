#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");
    char nome[30], nome1[30];
    int i1, i2;

    printf("Nome Dos Usuários\n");
    printf("Nome do 1ª Usuário: ");
    gets(nome);
    printf("Idade do 1ª Usuário: ");
    scanf("%d", &i1);
    printf("O usuário %s tem %d anos! \n", nome, i1);

    printf("Nome do 2ª Usuário: ");
    scanf("%s", nome1);
    printf("Idade do 2ª Usuário: ");
    scanf("%d", &i2);
    printf("O usuário %s tem %d anos! \n", nome1, i2);
    system("pause");

}
