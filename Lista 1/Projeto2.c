#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float massa,aceleracao,forca;
	
	printf("Insira a massa: ");
	scanf("%f", &massa);
	printf("Insira a acelera��o: ");
	scanf("%f", &aceleracao);
	
	forca = massa * aceleracao;
	
	printf("\nA for�a resultante � de: %.2f\n", forca);
	
	return 0;
}
