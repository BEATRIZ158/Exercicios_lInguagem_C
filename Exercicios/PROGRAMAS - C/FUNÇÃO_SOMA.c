#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int n1, int n2)//soma recebe n1 e n2, e retorna int
{
    int resultado;
    resultado = n1 + n2;
    return resultado; //retorna o valor para main
}

void main()
{
    int v1, v2, resultado;
    printf("Digite o primeiro valor: "); scanf("%d", &v1);
    printf("Digite o segundo valor: "); scanf("%d", &v2);

    //chama a função e receba o retorno
    resultado = soma(v1, v2);
    printf("A soma %d + %d = %d\n", v1, v2, resultado);

    return 0;
}
