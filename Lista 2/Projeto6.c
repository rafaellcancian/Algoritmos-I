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
	printf("\n1 � Adi��o, 2 � Subtra��o, 3 � Multiplica��o e 4 � Divis�o");
	printf("\n\nInsira a opera��o desejada: ");
	scanf("%f", &menu);

	if ((menu != 1) && (menu != 2) && (menu != 3) && (menu != 4)) {
		printf("\nA opera��o inserida n�o existe.\n");
	}

	if (menu == 1) {
		printf("\nA opera��o escolhida foi: Adi��o.");
		adi = valor1 + valor2;
		printf("\n\nResultado: %.2f\n", adi);
	} 
	else if (menu == 2) {
		printf("\nA opera��o escolhida foi: Subtra��o.");
		sub = valor1 - valor2;
		printf("\n\nResultado: %.2f\n", sub);
	} 
	else if (menu == 3) {
		printf("\nA opera��o escolhida foi: Multiplica��o.");
		mul = valor1 * valor2;
		printf("\n\nResultado: %.2f\n", mul);
	} 
	else if (menu == 4) {
		printf("\nA opera��o escolhida foi: Divis�o.");
		div = valor1 / valor2;
		printf("\n\nResultado: %.2f\n", div);
	}

	return 0;
}
