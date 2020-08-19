#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int v1,v2,opcao;

	printf ("Digite o primeiro valor: ");
	scanf("%d", &v1);
	printf ("Digite o segundo valor: ");
	scanf("%d", &v2);
	printf ("\nDigite:\n(1) para Somar\n(2) para Subtrair\n(3) para Multiplicar\n(4) para Dividir\n\nValor: ");
	scanf("%d", &opcao);

	if ((v2 == 0) && (opcao == 4)) {
		printf("\nN�o existe divis�o por zero.\n");
	}
	else {
		switch (opcao) {
			case 1: {
				printf("\nResultado da soma: %d\n", v1 + v2);
				break;
			}
			case 2: {
				printf("\nResultado da subtra��o: %d\n", v1 - v2);
				break;
			}
			case 3: {
				printf("\nResultado da multiplica��o: %d\n", v1 * v2);
				break;
			}
			case 4: {
				printf("\nResultado da divis�o: %d\n", v1 / v2);
				break;
			}
			default: {
				printf("\nO valor inserido � inv�lido.\n");
				break;
			}
		}
	}
	
	return 0;
}
