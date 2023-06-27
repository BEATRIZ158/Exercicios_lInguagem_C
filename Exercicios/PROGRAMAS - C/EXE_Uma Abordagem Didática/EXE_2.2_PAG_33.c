#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    float com, lar, preco, total;

    printf("Medidas da sala:\n");
    printf("Cmprimento(metros): ");
    scanf("%f", &com);
    printf("Largura(metros): ");
    scanf("%f", &lar);
    printf("Preço do mª:R$ ");
    scanf("%f", &preco);
    total = (com*lar)/preco;
    printf("Custo total fica em R$%.2f\n", total);
}
