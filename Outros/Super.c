#include <stdio.h>
#include <locale.h>
 
int main () {
    setlocale(LC_ALL, "Portuguese");

	int vetor[2];
    int i,num1,num2,numint,erro=0;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    if (num1 % 2 == 0) {
    	num1 = num1 * 2;
    	printf("\nO valor foi dobrado: %d\n\n", num1);
    }
    else {
    	num1 = num1 * 3;
    	printf("\nO valor foi triplicado: %d\n\n", num1);
    }
    if (num2 % 2 == 0) {
    	num2 = num2 * 2;
    	printf("O valor foi dobrado: %d\n\n", num2);
    }
    else {
    	num2 = num2 * 3;
    	printf("O valor foi triplicado: %d\n\n", num2);
    }

    vetor[0] = num1;
    vetor[1] = num2;

    printf("Os valores são:");

    for (i = 0; i <= 1; i++) {
    	printf("\n- %d", vetor[i]);
    }

    do {
    	printf("\n\nDigite um número inteiro (maior que 1): ");
    	scanf("%d", &numint);

    	if (numint < 1) {
    		system("cls");
    		printf("[AVISO] Número inválido.");
    		erro = 1;
    	}
    	else {
    		erro = 0;
    	}
    }
    while (erro == 1);

    for (i = 0; i <= 1; i++) {
    	vetor[i] = vetor[i] * numint;
    }

    int matriz[2][2],lin,col;

    matriz[0][0] = vetor[0];
    matriz[0][1] = vetor[1];
    matriz[1][0] = vetor[0] * 2;
    matriz[1][1] = vetor[1] * 2;

    printf("\nVetores:");

    for (i = 0; i <= 1; i++) {
    	printf("\n- %d", vetor[i]);
    }

    printf("\n\nMatriz:");

    for (lin = 0; lin <= 1; lin++) {
		printf("\n");

		for (col = 0; col <= 1; col++) {
			printf("%d ", matriz[lin][col]);
		}
	}
	
	printf("\n");

    return 0;
}
