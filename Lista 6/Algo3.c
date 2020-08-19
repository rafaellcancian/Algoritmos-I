#include <stdio.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	int num1[5],num2[5],num3[5];

	printf("Digite os 5 primeiros números:\n");

	for (i = 0; i <= 4; i++) {
		printf("- ");
		scanf("%d", &num1[i]);
	}

	printf("\nDigite os outros 5 números:\n");

	for (i = 0; i <= 4; i++) {
		printf("- ");
		scanf("%d", &num2[i]);
	}
	
	printf("\nResultados:\n");
	
	for(i = 0; i <= 4; i++) {
		num3[i] = num1[i] * num2[i];
		
		printf("- %d\n", num3[i]);
	}
	
	return 0;
}
