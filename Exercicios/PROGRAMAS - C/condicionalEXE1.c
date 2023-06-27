#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Você possui %d anos, é ", idade);
    if (idade >= 18){
        printf("maior de idade");
    }else{
        printf("menor de idade");
    }
}
