#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int pecas, td;
    printf("Total de pe�as produzidas: ");
    scanf("%d", &pecas);
    printf("Total de pe�as defeituosas: ");
    scanf("%d", &td);
    if (td > (10*pecas)/100){
        printf("A m�quina precisa de manuten��o.");
    }else{
        printf("A m�quina n�o precisa de manuten��o.");
    }
}

