#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num1,num2,num3,num4,media;

	printf("Insira o primeiro valor: ");
	scanf("%d", &num1);
	printf("Insira o segundo valor: ");
	scanf("%d", &num2);
	printf("Insira o terceiro valor: ");
	scanf("%d", &num3);
	printf("Insira o quarto valor: ");
	scanf("%d", &num4);
	
	media = (num1 + num2 + num3 + num4) / 4;
	
	if (num1 > media) {
		printf("\nO número %d é maior que a média.\n", num1);
	} 
	if (num2 > media) {
		printf("\nO número %d é maior que a média.\n", num2);
	} 
	if (num3 > media) {
		printf("\nO número %d é maior que a média.\n", num3);
	} 
	if (num4 > media) {
		printf("\nO número %d é maior que a média.\n", num4);
	} 
	return 0;
}
