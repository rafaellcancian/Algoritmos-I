#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int lado1,lado2,lado3,soma1,soma2,soma3;

	printf("Digite o primeiro lado do tri�ngulo: ");
	scanf("%d", &lado1);
	printf("Digite o segundo lado do tri�ngulo: ");
	scanf("%d", &lado2);
	printf("Digite o terceiro lado do tri�ngulo: ");
	scanf("%d", &lado3);

	soma1 = lado2 + lado3;
	soma2 = lado1 + lado3;
	soma3 = lado2 + lado1;

	if ((lado1 < soma1) && (lado2 < soma2) && (lado3 < soma3)) {
		if ((lado1 == lado2) && (lado1 == lado3) && (lado2 == lado1) && (lado2 == lado3) && (lado3 == lado1) && (lado1 == lado2)) {
			printf("\nO tri�ngulo � equil�tero.\n");
			return 0;
		}
		else if ((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado1) || (lado2 == lado3) || (lado3 == lado1) || (lado1 == lado2)) {
			printf("\nO tri�ngulo � is�celes.\n");
			return 0;
		}
		else if ((lado1 != lado2) && (lado1 != lado3) && (lado2 != lado1) && (lado2 != lado3) && (lado3 != lado1) && (lado1 != lado2)) {
			printf("\nO tri�ngulo � escaleno.\n");
			return 0;
		}
	}
	else {
		printf("\nOs lados inseridos n�o formam um tri�ngulo.\n");
	}

	return 0;
}
