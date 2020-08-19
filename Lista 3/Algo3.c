#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num;

	printf("Insira um número (menor que 1000): ");
	scanf("%d", &num);

	if (num < 1000) {
		printf("\nNúmeros ímpares entre %d e 1000:\n\n", num);

		for (; num < 1000; num++) {
			if (num % 2 == 1) {
				printf("%d\n", num);
			}
		}
	}
	else {
		printf("\nO número inserido é inválido.");
	}

	return 0;
}
