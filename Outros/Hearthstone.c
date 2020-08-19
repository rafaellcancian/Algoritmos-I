#include <stdio.h>
#include <locale.h>
 
int main () {
    setlocale(LC_ALL, "Portuguese");
    int i,menu;
    float win=0,loss=0,winrate=0;
   
	for (i = 1;; i++) {
		do {
        	printf("%d� Partida:", i);
        	printf("\n\nVit�ria(s): %.0f // Derrota(s): %.0f", win, loss);
        	printf("\n\nTaxa de vit�ria: %.2f %%", winrate);
        	printf("\n\nVoc�?\n\n(1) Ganhou\n(2) Perdeu\n\n(0) Para finalizar o programa\n\nResposta: ");
        	scanf("%d", &menu);
        	
        	switch (menu) {
        		case 1: {
        			system("cls");
        			win++;
					break;
				}
				case 2: {
					loss++;
					system("cls");
					break;
				}
				case 0: {
					i = i - 1;
					system("cls");
					printf("Total de partidas: %d", i);
        			printf("\n\nVit�ria(s): %.0f // Derrota(s): %.0f", win, loss);
        			printf("\n\nTaxa de vit�ria: %.2f %%\n", winrate);
					return 0;
					break;
				}
				default: {
					system("cls");
					printf("AVISO: O valor inserido � inv�lido, por favor insira um valor v�lido (1, 2 ou 0).\n\n");
					break;
				}
			}
			winrate = (win / i) * 100;
	    }
		while ((menu != 1) && (menu != 2) && (menu != 0));
    }
   
    return 0;
}
