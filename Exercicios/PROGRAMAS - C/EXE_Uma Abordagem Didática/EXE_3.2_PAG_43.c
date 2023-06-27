#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int pecas, td;
    printf("Total de peças produzidas: ");
    scanf("%d", &pecas);
    printf("Total de peças defeituosas: ");
    scanf("%d", &td);
    if (td > (10*pecas)/100){
        printf("A máquina precisa de manutenção.");
    }else{
        printf("A máquina não precisa de manutenção.");
    }
}

