#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int x,y,area;
	
	printf("Insira o ponto X: ");
	scanf("%d", &x);
	printf("Insira o ponto Y: ");
	scanf("%d", &y);
	
	area = x * y;
	
	printf("\nA �rea do ret�ngulo �: %d\n", area);
	
	return 0;
}
