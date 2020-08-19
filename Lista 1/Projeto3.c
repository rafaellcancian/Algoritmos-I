#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf("O número da vaga é: 87\n");
	
	return 0;
}
