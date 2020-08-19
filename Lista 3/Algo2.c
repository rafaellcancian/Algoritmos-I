#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num,mult,resultado;

	for (num = 1; num <= 10; num++) {
		printf("\nTabuada do %d:\n\n", num);

		for (mult = 1; mult <= 10; mult++) {
			resultado = num * mult;
			printf("%d X %d = %d\n", mult, num, resultado);
		}
	}

	return 0;
}
