#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int voltar;
do {
	setlocale(LC_ALL, "Portuguese");
	float larg,compr,prof,metro3,valor,valorf;
	
	printf("Piscinas SM\n\nOrçamentos:\n");
	printf("\nDigite a largura: ");
	scanf ("%f", &larg);
	printf("Digite o comprimento: ");
	scanf ("%f", &compr);
	printf("Digite a profundidade: ");
	scanf ("%f", &prof);
	printf("\nDigite o valor do metro cúbico cobrado: ");
	scanf ("%f", &valor);
	
	metro3 = larg * compr * prof;
	valorf = metro3 * valor; 
	
	printf("\n\nValor final do orçamento: R$ %.2f\n", valorf);
	
do {
	printf("\nDigite 0 para sair ou 1 para voltar: ");
	scanf("%d", &voltar);
}
	while ((voltar != 0) && (voltar != 1));
	
if (voltar == 1) {
	system("cls");
}
	
}
	while (voltar == 1);
	return 0;
}
