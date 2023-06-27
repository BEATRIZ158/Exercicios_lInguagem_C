#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL,"");
   int num, cal, con;

   printf("#=#=#=#=#=# TABUADA DE SUBTRAÇÃO #=#=#=#=#=#\n");
   printf("Número Escolhido:");
   scanf("%d", &num);
   printf("#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
   con = 0;

   if (num > -1)
    {
        while (con <= 9)
        {
            cal = con - num;
            con += 1;
            printf("%d - %d = %d\n", con, num, cal);
        }
   }
   else
    {
    printf("Número Inválido. Tente novamente!");
   }
}
