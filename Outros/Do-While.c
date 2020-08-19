#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int menu;

	do {
		printf("Digite:\n\n(1) Para exibir a previsão do tempo\n(2) Para exibir a cotação do Dollar\n(3) Para exibir a cotação do Euro\n(4) Para exibir a principal notícia do dia\n(5) Para finalizar o programa\n\nResposta: ");
		scanf("%d", &menu);

		switch (menu) {
			case 1: {
				system("cls");
				printf("Resposta: 21°C, Nublado e previsão de chuva na Sexta.\n\n");
				break;
			}
			case 2: {
				system("cls");
				printf("Resposta: A cotação do Dollar é R$ 3,54\n\n");
				break;
			}
			case 3: {
				system("cls");
				printf("Resposta: A cotação do Euro é R$ 4,22\n\n");
				break;
			}
			case 4: {
				system("cls");
				printf("Resposta: China e Coreia do Norte confirmam que Kim Jong-un se reuniu novamente com Xi Jinping.\n\n");
				break;
			}
			case 5: {
				return 0;
				break;
			}
			default: {
				system("cls");
				printf("AVISO: O valor inserido é inválido, por favor insira um valor válido.\n");
			}
		}
	}
	while ((menu == 1) || (menu == 2) || (menu == 3) || (menu == 4));

	return 0;
}
