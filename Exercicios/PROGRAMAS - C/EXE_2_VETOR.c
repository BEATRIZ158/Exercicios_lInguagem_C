#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");
    int v1[5], i, x, aux;

    printf("Vetor 1:\n");
    for(i = 0;i <= 4;i++)
    {
    printf("Digite um número para a [%i]ª posição: ", i); scanf("%i", &v1[i]);
    }
    for(i=0;i <= 4;i++)
    {
        for(x=i+1;x <= 4;x++)
        {
            if(v1[i] > v1[x])
            {
              aux = v1[i];
              v1[i] = v1[x];
              v1[x] = aux;
            }
        }
    }
    printf("Vetor Ordenado:\n");
    for(i = 0;i <= 4;i++)
    {
    printf("%d  ", v1[i]);
    }
getchar();
printf("\n\n");
system("pause");
return(0);
}
