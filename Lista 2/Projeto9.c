#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int lado1,lado2,lado3,soma1,soma2,soma3;

	printf("Digite o primeiro lado do triângulo: ");
	scanf("%d", &lado1);
	printf("Digite o segundo lado do triângulo: ");
	scanf("%d", &lado2);
	printf("Digite o terceiro lado do triângulo: ");
	scanf("%d", &lado3);

	soma1 = lado2 + lado3;
	soma2 = lado1 + lado3;
	soma3 = lado2 + lado1;

	if ((lado1 < soma1) && (lado2 < soma2) && (lado3 < soma3)) {
		if ((lado1 == lado2) && (lado1 == lado3) && (lado2 == lado1) && (lado2 == lado3) && (lado3 == lado1) && (lado1 == lado2)) {
			printf("\nO triângulo é equilátero.\n");
			return 0;
		}
		else if ((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado1) || (lado2 == lado3) || (lado3 == lado1) || (lado1 == lado2)) {
			printf("\nO triângulo é isóceles.\n");
			return 0;
		}
		else if ((lado1 != lado2) && (lado1 != lado3) && (lado2 != lado1) && (lado2 != lado3) && (lado3 != lado1) && (lado1 != lado2)) {
			printf("\nO triângulo é escaleno.\n");
			return 0;
		}
	}
	else {
		printf("\nOs lados inseridos não formam um triângulo.\n");
	}

	return 0;
}
