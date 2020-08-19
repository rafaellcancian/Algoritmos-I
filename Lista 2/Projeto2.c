#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num1,num2,num3,num4;

	printf("Insira o primeiro valor: ");
	scanf("%d", &num1);
	printf("Insira o segundo valor: ");
	scanf("%d", &num2);
	printf("Insira o terceiro valor: ");
	scanf("%d", &num3);
	printf("Insira o quarto valor: ");
	scanf("%d", &num4);

	if ((num1 > num2) && (num1 > num3) && (num1 > num4)) {
		printf("\nO número %d é o maior.\n", num1);
	} 
	else if ((num2 > num1) && (num2 > num3) && (num2 > num4)) {
		printf("\nO número %d é o maior.\n", num2);
	} 
	else if ((num3 > num1) && (num3 > num2) && (num3 > num4)) {
		printf("\nO número %d é o maior.\n", num3);
	} 
	else if ((num4 > num1) && (num4 > num2) && (num4 > num3)) {
		printf("\nO número %d é o maior.\n", num4);
	}
	
	if ((num1 < num2) && (num1 < num3) && (num1 < num4)) {
		printf("\nO número %d é o menor.\n", num1);
	} 
	else if ((num2 < num1) && (num2 < num3) && (num2 < num4)) {
		printf("\nO número %d é o menor.\n", num2);
	} 
	else if ((num3 < num1) && (num3 < num2) && (num3 < num4)) {
		printf("\nO número %d é o menor.\n", num3);
	} 
	else if ((num4 < num1) && (num4 < num2) && (num4 < num3)) {
		printf("\nO número %d é o menor.\n", num4);
	}

	return 0;
}
