#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main () {
    setlocale(LC_ALL, "Portuguese");
    char menu;
    int menuf,i;
    float freq=88.0,canal1=0,canal2=0,canal3=0,canal4=0,canal5=0,canal6=0;

    for (;; i++) {
    	system("cls");
    	printf("Rádio FM\n\nFrequência atual: %.1f\n\n", freq);
    	printf("Frequências salvas:\n");
    	
    	if ((canal1 == 0) && (canal2 == 0) && (canal3 == 0) && (canal4 == 0) && (canal5 == 0) && (canal6 == 0)) {
    		printf("Não há nenhuma frequência salva.\n");
		}
    	if (canal1 != 0) {
    		printf("Canal 1: %.1f\n", canal1);
		}
		if (canal2 != 0) {
    		printf("Canal 2: %.1f\n", canal2);
		}
		if (canal3 != 0) {
    		printf("Canal 3: %.1f\n", canal3);
		}
		if (canal4 != 0) {
    		printf("Canal 4: %.1f\n", canal4);
		}
		if (canal5 != 0) {
    		printf("Canal 5: %.1f\n", canal5);
		}
		if (canal6 != 0) {
    		printf("Canal 6: %.1f\n", canal6);
		}
		
    	printf("\nComandos:\n\n(+) Aumentar frequência\n(-) Diminuir frequência\n(1 a 6) Salvar uma frequência na memória\n(1 a 6) Carregar uma frequência da memória\n(M) Sobrescrever uma frequência na memória\n\n(L) Limpar memória\n(S) Sair\n\nValor: ");
    	scanf("%c", &menu);
		
		switch (menu) {
    		case '+': {
    			if (freq < 107.9) {
    				freq = freq + 0.1;
    			}
    			break;
    		}
    		case '-': {
    			if (freq > 88.0) {
    				freq = freq - 0.1;
    			}
    			break;
    		}
    		case '1': {
    			if (canal1 == 0) {
    				canal1 = freq;
    			}
    			else {
    				freq = canal1;
    			}
    			break;
    		}
    		case '2': {
    			if (canal2 == 0) {
    				canal2 = freq;
    			}
    			else {
    				freq = canal2;
    			}
    			break;
    		}
    		case '3': {
    			if (canal3 == 0) {
    				canal3 = freq;
    			}
    			else {
    				freq = canal3;
    			}
    			break;
    		}
    		case '4': {
    			if (canal4 == 0) {
    				canal4 = freq;
    			}
    			else {
    				freq = canal4;
    			}
    			break;
    		}
    		case '5': {
    			if (canal5 == 0) {
    				canal5 = freq;
    			}
    			else {
    				freq = canal5;
    			}
    			break;
    		}
    		case '6': {
    			if (canal6 == 0) {
    				canal6 = freq;
    			}
    			else {
    				freq = canal6;
    			}
    			break;
    		}
    		case 'l':
    		case 'L': {
    			canal1=0,canal2=0,canal3=0,canal4=0,canal5=0,canal6=0;
				break;
			}
			case 's':
    		case 'S': {
    			return 0;
				break;
			}
    		case 'm':
			case 'M': {
    			printf("\nDigite o novo canal para a frequência atual: ");
    			scanf("%d", &menuf);

    			switch (menuf) {
    				case 1: {
    					canal1 = freq;
    					break;
    				}
    				case 2: {
    					canal2 = freq;
    					break;
    				}
    				case 3: {
    					canal3 = freq;
    					break;
    				}
    				case 4: {
    					canal4 = freq;
    					break;
    				}
    				case 5: {
    					canal5 = freq;
    					break;
    				}
    				case 6: {
    					canal6 = freq;
    					break;
    				}
    			}
    		}
    	}
    }
    
    return 1;
}
