#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num1;
	
	printf("Informe um número: ");
	scanf ("%d", &num1);

	if (num1 % 2 == 0) {
		printf("\nO número %d é par.\n", num1);
	} 
	else {
		printf("\nO número %d é impar.\n", num1);

	}
	return 0;
}
