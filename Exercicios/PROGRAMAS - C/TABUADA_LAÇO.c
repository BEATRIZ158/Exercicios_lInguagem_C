#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
setlocale(LC_ALL,"");
int in, cal, vt[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, x;

    printf("***** TABUADA DO 1 AO 9 *****\n");
    for(x = 0;x <= 9;x++)
    {
        printf("Tabuada do %d:\n", vt[x]);
        for(in = 1;in <= 10;in++)
        {
            cal = vt[x] * in;
            printf("%d x %d = %d\n", vt[x], in, cal);
        }
    printf("\n");
    }
}
