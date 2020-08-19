#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float a,b,c,delta,x,x1,x2;
	
	printf("Insira o valor A: ");
	scanf("%f", &a);
	printf("Insira o valor B: ");
	scanf("%f", &b);
	printf("Insira o valor C: ");
	scanf("%f", &c);
	
	delta = pow(b,2) -4 * a * c;
	
	x1 = (-(b) + sqrt(delta)) / (a * 2);
	x2 = (-(b) - sqrt(delta)) / (a * 2);
	
	printf("\nResultados:\n\n");
		
	printf("DELTA: %.2f\n", delta);
	if (delta < 0) {
		printf("\nO DELTA é negativo e por isso a equação não possui raízes reais.\n");
	}
	else if (delta > 0) {
		printf("\nX1: %.2f\n", x1);
		printf("X2: %.2f\n", x2);
	}
	else if (delta == 0) {
		x = -(b) / (a * 2);
		
		printf("\nX: %.2f\n", x);
		printf("\nO DELTA é igual a zero e por isso as raízes da equação são iguais.\n");
	}
	
	return 0;
}
