#include <stdio.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "Portuguese");

	int num[5];
	int i, somatorio;

	printf("Digite os números para realizar o somatório:\n");

	for (i = 0; i <= 4; i++) {
		printf("- ");
		scanf("%d", &num[i]);
		
		somatorio = somatorio + num[i];
	}

	printf("\nO somatório é: %d", somatorio);

	return 0;
}