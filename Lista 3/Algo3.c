#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num;

	printf("Insira um n�mero (menor que 1000): ");
	scanf("%d", &num);

	if (num < 1000) {
		printf("\nN�meros �mpares entre %d e 1000:\n\n", num);

		for (; num < 1000; num++) {
			if (num % 2 == 1) {
				printf("%d\n", num);
			}
		}
	}
	else {
		printf("\nO n�mero inserido � inv�lido.");
	}

	return 0;
}
