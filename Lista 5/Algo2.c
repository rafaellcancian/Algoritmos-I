#include <stdio.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "Portuguese");

	int num[5];
	int i, somatorio;

	printf("Digite os n�meros para realizar o somat�rio:\n");

	for (i = 0; i <= 4; i++) {
		printf("- ");
		scanf("%d", &num[i]);
		
		somatorio = somatorio + num[i];
	}

	printf("\nO somat�rio �: %d", somatorio);

	return 0;
}