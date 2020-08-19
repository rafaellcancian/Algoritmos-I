#include <stdio.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num[5];
	int i, j, temp;
	
	printf("Digite os números para ordenar:\n");

	for (i = 0; i <= 4; i++) {
		printf("- ");
		scanf("%d", &num[i]);
	}
	
	for (i = 0; i <= 4; i++) {
    	for (j = i + 1; j <= 4; j++) {
        	if (num[i] > num[j]) {
            	temp = num[i];
                num[i] = num[j];
                num[j] = temp;
			}    	
		}
	}

	printf("\nOs números foram ordenados:\n");

    for (i = 0; i <= 4; i++) {
        printf("- %d\n", num[i]);
	}
	
	return 0;
}