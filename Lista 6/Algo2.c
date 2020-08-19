#include <stdio.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "Portuguese");

	int i, temp;
	int num1[5],num2[5];

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

	for (i = 0; i <= 4; i++) {
    	temp = num1[i];
        num1[i] = num2[i];
        num2[i] = temp;		
	}

	printf("\nOs números foram trocados:\n");

	for (i = 0; i <= 4; i++) {
        printf("- %d\n", num1[i]);
	}

	printf("\n");

	for (i = 0; i <= 4; i++) {
        printf("- %d\n", num2[i]);
	}

	return 0;
}
