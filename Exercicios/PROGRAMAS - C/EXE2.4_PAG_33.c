#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    float bits, v, t;

    printf("Tamnaho do arquivo(bits): ");
    scanf("%f", &bits);
    printf("Velocidade da conexão(min): ");
    scanf("%f", &v);
    t = bits/(v*60);

    printf("Tempo necessário para o download:%.2fbits/sec\n", t);
}
