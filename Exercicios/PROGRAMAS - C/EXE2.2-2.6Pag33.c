#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    float metro, total;
    int com, lar;

    printf("Pre�o para forrar sala escolar \n");
    printf("Comprimento da sala: ");
    scanf("%d", &com);
    printf("Largura da sala: ");
    scanf("%d", &lar);
    printf("Pre�o do metro quadrado do carpete:R$ ");
    scanf("%f", &metro);
    total = (com*lar)*metro;

    printf("O valor final para forrar o piso � R$%.2f \n", total);
}
