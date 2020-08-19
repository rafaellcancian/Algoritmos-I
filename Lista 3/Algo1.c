#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num,i,resultado;

	printf("Digite um número: ");
	scanf("%d", &num);

	for (i = 1; i <= 10; i++) {
		resultado = num * i;
		printf("%d X %d = %d\n",i, num, resultado);
	}

	return 0;
}
