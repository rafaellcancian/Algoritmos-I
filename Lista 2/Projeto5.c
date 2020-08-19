#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float nota1,nota2,exame,mediap,mediaf;

	printf("Insira a primeira nota: ");
	scanf ("%f", &nota1);
	printf("Insira a segunda nota: ");
	scanf ("%f", &nota2);

	mediap = (nota1 + nota2) / 2;

	if (mediap >= 7) {
		printf("\nO aluno foi aprovado.\n");
	} 
	else {
		printf("\nInsira a nota do exame final: ");
		scanf("%f", &exame);

		mediaf = (nota1 + nota2 + exame) / 3;

		if(mediaf >= 5) {
			printf("\nO aluno foi aprovado.\n");
		} 
		else {
			printf("\nO aluno foi reprovado.\n");
		}

	}

	return 0;
}
