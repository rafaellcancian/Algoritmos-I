#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float numnota,nota,i,final=0;
	char nome[100],nomef[100];

	printf("Quantas notas você quer inserir?\nResposta: ");
	scanf("%f", &numnota);
	printf("\n");

	for (i = 1; i <= numnota; i++) {
		printf("Nome %.0f: ", i);
		scanf("%s", nome);
		printf("Nota %.0f: ", i);
		scanf("%f", &nota);

		if (nota > final) {
			final = nota;
			strcpy(nomef, nome);
		}
	}

	printf("\nA maior nota é: %.1f, do aluno %s", final, nomef);

	return 0;
}