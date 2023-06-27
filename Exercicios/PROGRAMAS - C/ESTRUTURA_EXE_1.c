#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    struct LIVROS
    {
        int codigo; char nome[50]; float preco;
    } matriz[2][2];

    setlocale(LC_ALL,"");
    int l, c;
    for(l = 0;l < 2;l++){
        for(c = 0;c < 2;c++){
            printf("Digite o código: "); scanf("%d", &matriz[l][c].codigo);
            printf("Digite o nome do livro: "); setbuf(stdin, NULL); gets(matriz[l][c].nome);
            printf("Digite o preço do livro: "); scanf("%f", &matriz[l][c].preco);
            printf("\n");
        }}
    printf("Relatório de cadastro:\n");
      for(l = 0;l < 2;l++){
          for(c = 0;c < 2;c++){
            printf("%d   %s   %.1f\n", matriz[l][c].codigo, matriz[l][c].nome, matriz[l][c].preco);
    }}
}
