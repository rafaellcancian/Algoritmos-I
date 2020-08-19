#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	char nome1[100], nome2[100], nome3[100]; 
	char genero1, genero2, genero3;
	int idade1, idade2, idade3;

	printf("Insira os dados da primeira pessoa:\n\n");
	printf("Digite o seu nome: ");
	scanf("%s", nome1);
	fflush(stdin);
	printf("Digite o seu gênero (M ou F): ");
	scanf(" %c", &genero1);
	fflush(stdin);
	printf("Digite a sua idade: ");
	scanf("%d", &idade1);
	system("cls");

	printf("Insira os dados da segunda pessoa:\n\n");
	printf("Digite o seu nome: ");
	scanf("%s", nome2);
	fflush(stdin);
	printf("Digite o seu gênero (M ou F): ");
	scanf(" %c", &genero2);
	fflush(stdin);
	printf("Digite a sua idade: ");
	scanf("%d", &idade2);
	system("cls");

	printf("Insira os dados da terceira pessoa:\n\n");
	printf("Digite o seu nome: ");
	scanf("%s", nome3);
	fflush(stdin);
	printf("Digite o seu gênero (M ou F): ");
	scanf(" %c", &genero3);
	fflush(stdin);
	printf("Digite a sua idade: ");
	scanf("%d", &idade3);
	system("cls");

	if ((genero1 == 'M') || (idade1 > 35)) {
		printf("Nome: %s\nGênero: %c\nIdade: %d\n", nome1, genero1, idade1);
	} 
	else {
		printf("\nOs dados inseridos da primeira pessoa não se enquadram para serem exibidos.\n");
	}
	if ((genero2 == 'M') || (idade2 > 35)) {
		printf("\nNome: %s\nGênero: %c\nIdade: %d\n", nome2, genero2, idade2);
	} 
	else {
		printf("\nOs dados inseridos da segunda pessoa não se enquadram para serem exibidos.\n");
	}
	if ((genero3 == 'M') || (idade3 > 35)) {
		printf("\nNome: %s\nGênero: %c\nIdade: %d\n", nome3, genero3, idade3);
	} 
	else {
		printf("\nOs dados inseridos da terceira pessoa não se enquadram para serem exibidos.\n");
	}

	return 0;

}
