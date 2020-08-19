#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num1,num2,resto,pot1,pot2,somaR,somaM,somaD;

	printf("Digite o primeiro n�mero: ");
	scanf("%d", &num1);
	printf("Digite o segundo n�mero: ");
	scanf("%d", &num2);

	if ((num2 == 0) || (num1 < num2)) {
		printf("\nOs valores inseridos s�o inv�lidos.\n");
	}
	else {
		resto = num1 % num2;

		if ((resto != 1) && (resto != 2) && (resto != 3) && (resto != 4)) {
			pot1 = pow(num1, 2);
			pot2 = pow(num2, 2);

			printf ("\nOs quadrados dos n�meros s�o:\n\nN�mero 1: %d\nN�mero 2: %d\n", pot1,pot2);
		}
		else if (resto == 1) {
			somaR = num1 + num2 + resto;

			printf ("\nA soma dos n�meros mais o resto �: %d\n", somaR);
		}
		else if (resto == 2) {
			if (num1 % 2 == 0) {
				printf("\nO n�mero %d � par.\n", num1);
			}
			else {
				printf("\nO n�mero %d � impar.\n", num1);
			}
			if (num2 % 2 == 0) {
				printf("\nO n�mero %d � par.\n", num2);
			}
			else {
				printf("\nO n�mero %d � impar.\n", num2);
			}
		}
		else if (resto == 3) {
			somaM = (num1 + num2) * num1;

			printf ("\nA soma dos n�meros vezes o primeiro n�mero �: %d\n", somaM);
		}
		else if (resto == 4) {
			somaD = (num1 + num2) / num2;

			printf ("\nA soma dos n�meros dividido pelo segundo n�mero �: %d\n", somaD);
		}

	}

	return 0;

}
