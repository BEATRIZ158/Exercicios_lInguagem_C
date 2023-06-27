#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int num, cal, con;

    printf("#=#=#=#=#=# TABUADA DE ADIÇÃO #=#=#=#=#=#\n");

    printf("Número Escolhido: ");
    scanf("%d", &num);
    printf("#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    con = 0;

    if (num > -1)
    {
      while (con <= 9)
        {
        con = con + 1;
        cal = con + num;
        printf("%d + %d = %d\n", con, num, cal);
        }
    }else{
        printf("Número Inválido. Tente novamente!\n");
    }
}
