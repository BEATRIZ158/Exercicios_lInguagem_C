#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int MAIOR(int a, int b)
{
	int v;
	if(a > b){
	v = a;
	}else{
	v = b;
	}
}

void main()
{
    setlocale(LC_ALL,"");
	int va, vb, r;
	printf("Digite o elemento A: "); scanf("%d", &va);
	printf("Digite o elemento B: "); scanf("%d", &vb);
	r = MAIOR(va, vb);
	printf("O maior valor entre A e B é: %d\n", r);
}
