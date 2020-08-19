#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int hora1,hora2;
	float valor1,valor2,valorh1,valorh2;
	
	printf("Digite as horas dadas pelo Professor 1: ");
	scanf ("%d", &hora1);
	printf("Digite o valor (por hora) recebido pelo Professor 1: ");
	scanf ("%f", &valor1);
	
	printf("\nDigite as horas dadas pelo Professor 2: ");
	scanf ("%d", &hora2);
	printf("Digite o valor (por hora) recebido pelo Professor 2: ");
	scanf ("%f", &valor2);
	
	valorh1 = hora1 * valor1;
	valorh2 = hora2 * valor2;
	
	printf("\nSalário do Professor 1: %.2f", valorh1);
	printf("\nSalário do Professor 2: %.2f", valorh2);
	
	if (valorh1 > valorh2) {
		printf("\n\nO professor 1 tem o maior salário.\n");
	}
	else {
		printf("\n\nO professor 2 tem o maior salário.\n");
	}
	return 0;
}
