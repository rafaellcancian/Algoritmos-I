#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num1;
	
	printf("Informe um n�mero: ");
	scanf ("%d", &num1);

	if (num1 % 2 == 0) {
		printf("\nO n�mero %d � par.\n", num1);
	} 
	else {
		printf("\nO n�mero %d � impar.\n", num1);

	}
	return 0;
}
