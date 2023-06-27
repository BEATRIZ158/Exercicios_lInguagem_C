#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    float metro, total;
    int com, lar;

    printf("Preço para forrar sala escolar \n");
    printf("Comprimento da sala: ");
    scanf("%d", &com);
    printf("Largura da sala: ");
    scanf("%d", &lar);
    printf("Preço do metro quadrado do carpete:R$ ");
    scanf("%f", &metro);
    total = (com*lar)*metro;

    printf("O valor final para forrar o piso é R$%.2f \n", total);
}
