#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float peso,altura,imc;
	
	printf("Insira o seu peso: ");
	scanf("%f", &peso);
	printf("Insira a sua altura: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("\nO seu IMC é de: %.2f\n", imc);
	
	return 0;
}
