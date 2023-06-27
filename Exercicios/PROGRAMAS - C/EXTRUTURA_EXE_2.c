#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct NOTAS
{
	int nota_por, nota_mat;
	char nome[50]; float media;
};

void main()
{
	setlocale(LC_ALL,"");
	struct NOTAS alunos[3];
	int in = 1, l;

	for(l = 0;l < 3;l++){
		printf("Digite o nome do %d aluno(a):", in); setbuf(stdin, NULL); gets(alunos[l].nome); in++;
		printf("Digite a nota de português: "); scanf("%d", &alunos[l].nota_por);
		printf("Digite a nota de matematica: "); scanf("%d", &alunos[l].nota_mat);
		alunos[l].media = (alunos[l].nota_por + alunos[l].nota_mat)/2; printf("\n");
		}in = 1; printf("Relatório das Notas:\n");
	for(l = 0;l < 3;l++){
		printf("Aluno %d:\nNome: %s\nMedia:%.2f\n", in, alunos[l].nome, alunos[l].media); in++;
		printf("\n");
	}
}
