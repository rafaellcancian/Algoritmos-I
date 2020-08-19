#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num,con1,con2,op,pot;

	printf("Insira o número (entre 1000 e 9999): ");
	scanf ("%d", &num);
	
	con1 = num / 100;
	con2 = num % 100;
	
	op = con1 + con2;
	
	pot = pow(op,2);
	
	if (pot == num) {
		printf("\nO número obecede a regra.\n");
	}
	else {
		printf("\nO número não obecede a regra.\n");
	}
	
	return 0;
}
