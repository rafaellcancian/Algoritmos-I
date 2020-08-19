#include <stdio.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "Portuguese");

	int num[10];
	int i;

	printf("Digite os números para dobrar apenas os pares:\n");

	for (i = 0; i <= 9; i++) {
		printf("- ");
		scanf("%d", &num[i]);

		if (num[i] % 2 == 0) {
			num[i] = num[i] * 2;
		}
	}

	printf("\nOs números pares foram dobrados:\n");

    for (i = 0; i <= 9; i++) {
        printf("- %d\n", num[i]);
	}

	return 0;
}