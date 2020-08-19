#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf("A flor vermelha vale: 20\n");
	printf("A flor azul vale: 5\n");
	printf("A flor amarela vale: 2\n");
	
	printf("\nO resultado é: 27\n");
	
	return 0;
}
