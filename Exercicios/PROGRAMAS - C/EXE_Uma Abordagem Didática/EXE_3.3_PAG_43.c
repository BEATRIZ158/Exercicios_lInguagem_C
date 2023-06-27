#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int idade;

    printf("Idade do atleta: ");
    scanf("%d", &idade);
    printf("Categoria do atleta:");
    if (idade <= 10){
        printf("Infantil\n");
    }else if(idade <= 17){
        printf("Juvenil\n");
    }else{
        printf("Sênior\n");
    }
}
