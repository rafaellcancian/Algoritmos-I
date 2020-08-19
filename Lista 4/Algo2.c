#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main() {
    setlocale(LC_ALL, "Portuguese");
    int i,num;
    float par=0,impar=0,porcpar=0,porcimpar=0;

	while (num != 0) {
		for (i = 1;; i++) {
        	printf("%dº Número:", i);
			printf("\n\nPares: %.0f (%.2f %%) // Ímpares: %.0f (%.2f %%)", par, porcpar, impar, porcimpar);
        	printf("\n\n(0) Para finalizar o programa\n\nDigite um número: ");
        	scanf("%d", &num);

        	if (num == 0) {
				i = i - 1;
				system("cls");
				printf("Total de números inseridos: %d", i);
        		printf("\n\nPares: %.0f (%.2f %%) // Ímpares: %.0f (%.2f %%)\n", par, porcpar, impar, porcimpar);
				return 0;
			}
        	else if (num % 2 == 0) {
        		par++;
        		system("cls");
			}
			else if (num % 2 == 1) {
				impar++;
				system("cls");
			}
			
			porcpar = (par / i) * 100;
			porcimpar = (impar / i) * 100;
		}
	}

    return 0;
}
