#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int cont, num[5];

    for(cont = 0; cont <= 4;cont++)
    {
    printf("Digite um n�mero para a posi��o %d: ", cont); scanf("%d", &num[cont]);
    }
    printf("Os n�meros que voc� selecionou foram:\n");
    for(cont = 0; cont <= 4;cont++)
    {
    printf("%d\n", num[cont]);
    }
}
