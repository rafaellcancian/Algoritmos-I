#include <stdio.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "Portuguese");

	int i;
	char letra[6];

	printf("Digite 5 letras para serem escaneadas:\n");

	for (i = 1; i <= 5; i++) {
		printf("- ");
		scanf(" %c", &letra[i]);
	}

	printf("\n");

	for (i = 1; i <= 5; i++) {
		if ((letra[i] == 'A') || (letra[i] == 'a')) {
			printf("Letra A na posição %d\n", i);
		}
		else if ((letra[i] == 'E') || (letra[i] == 'e')) {
			printf("Letra E na posição %d\n", i);
		}
		else if ((letra[i] == 'I') || (letra[i] == 'i')) {
			printf("Letra I na posição %d\n", i);
		}
		else if ((letra[i] == 'O') || (letra[i] == 'o')) {
			printf("Letra O na posição %d\n", i);
		}
		else if ((letra[i] == 'U') || (letra[i] == 'u')) {
			printf("Letra U na posição %d\n", i);
		}
	}

	return 0;
}