#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float valor1,valor2,menu,adi,sub,mul,div;

	printf("Insira o primeiro valor: ");
	scanf ("%f", &valor1);
	printf("Insira o segundo valor: ");
	scanf ("%f", &valor2);
	printf("\n1 – Adição, 2 – Subtração, 3 – Multiplicação e 4 – Divisão");
	printf("\n\nInsira a operação desejada: ");
	scanf("%f", &menu);

	if ((menu != 1) && (menu != 2) && (menu != 3) && (menu != 4)) {
		printf("\nA operação inserida não existe.\n");
	}

	if (menu == 1) {
		printf("\nA operação escolhida foi: Adição.");
		adi = valor1 + valor2;
		printf("\n\nResultado: %.2f\n", adi);
	} 
	else if (menu == 2) {
		printf("\nA operação escolhida foi: Subtração.");
		sub = valor1 - valor2;
		printf("\n\nResultado: %.2f\n", sub);
	} 
	else if (menu == 3) {
		printf("\nA operação escolhida foi: Multiplicação.");
		mul = valor1 * valor2;
		printf("\n\nResultado: %.2f\n", mul);
	} 
	else if (menu == 4) {
		printf("\nA operação escolhida foi: Divisão.");
		div = valor1 / valor2;
		printf("\n\nResultado: %.2f\n", div);
	}

	return 0;
}
