#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num1,num2,resto,pot1,pot2,somaR,somaM,somaD;

	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	printf("Digite o segundo número: ");
	scanf("%d", &num2);

	if ((num2 == 0) || (num1 < num2)) {
		printf("\nOs valores inseridos são inválidos.\n");
	}
	else {
		resto = num1 % num2;

		if ((resto != 1) && (resto != 2) && (resto != 3) && (resto != 4)) {
			pot1 = pow(num1, 2);
			pot2 = pow(num2, 2);

			printf ("\nOs quadrados dos números são:\n\nNúmero 1: %d\nNúmero 2: %d\n", pot1,pot2);
		}
		else if (resto == 1) {
			somaR = num1 + num2 + resto;

			printf ("\nA soma dos números mais o resto é: %d\n", somaR);
		}
		else if (resto == 2) {
			if (num1 % 2 == 0) {
				printf("\nO número %d é par.\n", num1);
			}
			else {
				printf("\nO número %d é impar.\n", num1);
			}
			if (num2 % 2 == 0) {
				printf("\nO número %d é par.\n", num2);
			}
			else {
				printf("\nO número %d é impar.\n", num2);
			}
		}
		else if (resto == 3) {
			somaM = (num1 + num2) * num1;

			printf ("\nA soma dos números vezes o primeiro número é: %d\n", somaM);
		}
		else if (resto == 4) {
			somaD = (num1 + num2) / num2;

			printf ("\nA soma dos números dividido pelo segundo número é: %d\n", somaD);
		}

	}

	return 0;

}
