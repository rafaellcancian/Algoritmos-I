#include <stdio.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "Portuguese");

	int matriz[3][3];
	int lin,col;

	for (lin = 0; lin <= 2; lin++) {
		for (col = 0; col <= 2; col++) {
			printf("Lin: %d Col: %d -> ", lin + 1, col + 1);
			scanf("%d", &matriz[lin][col]);
		}
	}

	printf("\nResultado:\n");

	for (lin = 0; lin <= 2; lin++) {
		printf("\n");

		for (col = 0; col <= 2; col++) {
			matriz[lin][col] = matriz[lin][col] * 2;

			printf("%d ", matriz[lin][col]);
		}
	}

	return 0;
}