#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i,base=30,asteriscos;
	
	for (i = 1; i <= base; i++) {
		for (asteriscos = 1; asteriscos <= i; asteriscos++) {
            printf("* ");
		}
		
		printf("\n");
	}
    
	return 0;
}
