#include <stdio.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "Portuguese");

	int num[10];
	int i, j, temp;

	printf("Digite os números para serem trocados:\n");

	for (i = 0; i <= 9; i++) {
		printf("- ");
		scanf("%d", &num[i]);
	}

	for (i = 0; i <= 9; i++) {
    	for (j = i + 1; j <= 9; j++) {
        	temp = num[i];
            num[i] = num[j];
            num[j] = temp;	
		}
	}

	printf("\nOs números foram trocados:\n");

    for (i = 0; i <= 9; i++) {
        printf("- %d\n", num[i]);
	}

	return 0;
}