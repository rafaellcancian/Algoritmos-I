#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num1,num2,n1,n2,somatorio=0;
	
	printf("Insira o primeiro n�mero: ");
	scanf("%d", &num1);
	printf("Insira o segundo n�mero: ");
	scanf("%d", &num2);
	
	n1 = num1;
	n2 = num2;
	
	if (num1 < num2) {
		num1 = num1 + 1;
		for (num1; num1 < num2; num1++) {
			somatorio = somatorio + num1;
		}
	}
	else {
		num2 = num2 + 1;
		for (num2; num2 < num1; num2++) {
			somatorio = somatorio + num2;
		}
	}
	
	printf("\nO somat�rio entre %d e %d �: %d\n", n1, n2, somatorio);
	
	return 0;
}
