#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Voc� possui %d anos, � ", idade);
    if (idade >= 18){
        printf("maior de idade");
    }else{
        printf("menor de idade");
    }
}
