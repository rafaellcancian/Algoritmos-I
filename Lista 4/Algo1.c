#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i,num=1,somatorio=0;

	while (num != 0) {
		for (i = 1;; i++) {
			if (num == 0) {
				printf("O somat�rio �: %d\n", somatorio);
				return 0;
			}

			printf("%d� N�mero:", i);
			printf("\n\n(0) Para finalizar o programa\n\nDigite um n�mero: ");
			scanf("%d", &num);
			system("cls");

			somatorio = somatorio + num;
		}
	}
	
	return 0;
}
