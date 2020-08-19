#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main () {
    setlocale(LC_ALL, "Portuguese");
    
    int i,lin,col,lin1,col1,lin2,col2,erro=0,empate=0;
    char tabuleiro[4][4];
    
    for (lin = 1; lin <= 3; lin++) {
        for (col = 1; col <= 3; col++) {
            tabuleiro[lin][col] = ' ';
        }
    }
    
    for (;;) {
    	
	//Jogador 1
		if (empate < 9) {
			do {
			    for (lin = 1; lin <= 3; lin++) {
			    	printf("\n\t\t");
			        for (col = 1; col <= 3; col++) {
			        	printf("|%c|", tabuleiro[lin][col]);
			        }
			    }
		
			    printf("\n\nJogador 1:\nInsira abaixo uma posição (linha e coluna) para efetuar uma jogada:\n\n");
			    printf("Digite a linha: ");
			    scanf("%d", &lin1);
			    printf("Digite a coluna: ");
			    scanf("%d", &col1);
			    
			    system("cls");
			    
			    if (tabuleiro[lin1][col1] == ' ') {
			    	tabuleiro[lin1][col1] = 'X';
			    	empate++;
			    	erro = 0;
			    }
			    else {
					printf("[AVISO] Jogada inválida.\n");
					erro = 1;
			    }
			}
			while (erro == 1);
		}
		else {
			printf("[AVISO] O jogo empatou.\n");
			for (lin = 1; lin <= 3; lin++) {
				printf("\n\t\t");
				for (col = 1; col <= 3; col++) {
					printf("|%c|", tabuleiro[lin][col]);
				}
			}
			printf("\n");
			return 0;
		}
		
	//Verifica a horinzontal do jogador 1.
		for (i = 1; i <= 3; i++) {
			if ((tabuleiro[i][1] == tabuleiro[i][2]) && (tabuleiro[i][2] == tabuleiro[i][3])) {
				if ((tabuleiro[i][1] == 'X') && (tabuleiro[i][2] == 'X') && (tabuleiro[i][3] == 'X')) {
					printf("[AVISO] O jogador 1 venceu.\n");
					for (lin = 1; lin <= 3; lin++) {
						printf("\n\t\t");
						for (col = 1; col <= 3; col++) {
							printf("|%c|", tabuleiro[lin][col]);
						}
					}
					printf("\n");
					return 0;
				}
			}
		}
		
	//Verifica a vertical do jogador 1.
		for (i = 1; i <= 3; i++) {
			if ((tabuleiro[1][i] == tabuleiro[2][i]) && (tabuleiro[2][i] == tabuleiro[3][i])) {
				if ((tabuleiro[1][i] == 'X') && (tabuleiro[2][i] == 'X') && (tabuleiro[3][i] == 'X')) {
					printf("[AVISO] O jogador 1 venceu.\n");
					for (lin = 1; lin <= 3; lin++) {
						printf("\n\t\t");
						for (col = 1; col <= 3; col++) {
							printf("|%c|", tabuleiro[lin][col]);
						}
					}
					printf("\n");
					return 0;
				}
			}
		}
		
	//Verifica a diagonal do jogador 1.
		if ((tabuleiro[1][1] == 'X') && (tabuleiro[2][2] == 'X') && (tabuleiro[3][3] == 'X')) {
			printf("[AVISO] O jogador 1 venceu.\n");
			for (lin = 1; lin <= 3; lin++) {
				printf("\n\t\t");
				for (col = 1; col <= 3; col++) {
					printf("|%c|", tabuleiro[lin][col]);
				}
			}
			printf("\n");
			return 0;
		}
		  
	//Jogador 2
		if (empate < 9) {
		    do {
				for (lin = 1; lin <= 3; lin++) {
			    	printf("\n\t\t");
			    	for (col = 1; col <= 3; col++) {
			            printf("|%c|", tabuleiro[lin][col]);
			        }
			    }
			    
			    printf("\n\nJogador 2:\nInsira abaixo uma posição (linha e coluna) para efetuar uma jogada:\n\n");
			    printf("Digite a linha: ");
			    scanf("%d", &lin2);
			    printf("Digite a coluna: ");
			    scanf("%d", &col2);
			    
			    system("cls");
			    
			    if (tabuleiro[lin2][col2] == ' ') {
			    	tabuleiro[lin2][col2] = 'O';
			    	empate++;
			    	erro = 0;
			    }
			    else {
					printf("[AVISO] Jogada inválida.\n");
					erro = 1;
			    }
			}
			while (erro == 1);
		}
		else {
			printf("[AVISO] O jogo empatou.\n");
			for (lin = 1; lin <= 3; lin++) {
				printf("\n\t\t");
				for (col = 1; col <= 3; col++) {
					printf("|%c|", tabuleiro[lin][col]);
				}
			}
			printf("\n");
			return 0;
		}
		
	//Verifica a horinzontal do jogador 2.
		for (i = 1; i <= 3; i++) {
			if ((tabuleiro[i][1] == tabuleiro[i][2]) && (tabuleiro[i][2] == tabuleiro[i][3])) {
				if ((tabuleiro[i][1] == 'O') && (tabuleiro[i][2] == 'O') && (tabuleiro[i][3] == 'O')) {
					printf("[AVISO] O jogador 2 venceu.\n");
					for (lin = 1; lin <= 3; lin++) {
						printf("\n\t\t");
						for (col = 1; col <= 3; col++) {
							printf("|%c|", tabuleiro[lin][col]);
						}
					}
					printf("\n");
					return 0;
				}
			}
		}
		
	//Verifica a vertical do jogador 2.
		for (i = 1; i <= 3; i++) {
			if ((tabuleiro[1][i] == tabuleiro[2][i]) && (tabuleiro[2][i] == tabuleiro[3][i])) {
				if ((tabuleiro[1][i] == 'O') && (tabuleiro[2][i] == 'O') && (tabuleiro[3][i] == 'O')) {
					printf("[AVISO] O jogador 2 venceu.\n");
					for (lin = 1; lin <= 3; lin++) {
						printf("\n\t\t");
						for (col = 1; col <= 3; col++) {
							printf("|%c|", tabuleiro[lin][col]);
						}
					}
					printf("\n");
					return 0;
				}
			}
		}
		
	//Verifica a diagonal do jogador 2.
		if ((tabuleiro[1][1] == 'O') && (tabuleiro[2][2] == 'O') && (tabuleiro[3][3] == 'O')) {
			printf("[AVISO] O jogador 2 venceu.\n");
			for (lin = 1; lin <= 3; lin++) {
				printf("\n\t\t");
				for (col = 1; col <= 3; col++) {
					printf("|%c|", tabuleiro[lin][col]);
				}
			}
			printf("\n");
			return 0;
		}
	}
	

    return 1;
}
