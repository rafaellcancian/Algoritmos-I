#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int voltar;
do {
	setlocale(LC_ALL, "Portuguese");
	float valor1,valor2,som,sub,mul,div;
	
	printf("Bem-vindo ao Calc 2.0");
	
	printf("\n\nDigite o primeiro valor: ");
	scanf("%f", &valor1);
	printf("\nDigite o segundo valor: ");
	scanf("%f", &valor2);
	
	som = valor1 + valor2;
	sub = valor1 - valor2;
	mul = valor1 * valor2;
	div = valor1 / valor2;
	
	printf("\n\nResultados:\n");
	printf("\nSoma: %.2f", som);
	printf("\nSubtração: %.2f", sub);
	printf("\nMultiplicação: %.2f", mul);
	printf("\nDivisão: %.2f\n", div);
	
do {
	printf("\nDigite 1 para voltar: ");
	scanf("%d", &voltar);
}
	while ((voltar != 0) && (voltar != 1));
	
if (voltar == 1) {
	system("cls");
}
	
}
	while (voltar == 1);
	
	return 0;
}
