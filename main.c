#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define TENTATIVAS 5

void inicializarTabuleiro(char tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = '~'; // representa água
        }
    }
}

void mostrarTabuleiro(char tabuleiro[TAM][TAM]) {
    printf("\n  0 1 2 3 4\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", i);
        for (int j = 0; j < TAM; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char tabuleiro[TAM][TAM];
    int linhaNavio, colunaNavio;
    int linha, coluna;
    int acertou = 0;

    srand(time(NULL)); // inicializa gerador de números aleatórios

    inicializarTabuleiro(tabuleiro);

    // posição aleatória do navio
    linhaNavio = rand() % TAM;
    colunaNavio = rand() % TAM;

    printf("=== BATALHA NAVAL ===\n");
    printf("Tente acertar a posição do navio escondido!\n");

    for (int tentativa = 1; tentativa <= TENTATIVAS; tentativa++) {
        mostrarTabuleiro(tabuleiro);

        printf("\nTentativa %d de %d\n", tentativa, TENTATIVAS);
        printf("Digite a linha (0 a 4): ");
        scanf("%d", &linha);
        printf("Digite a coluna (0 a 4): ");
        scanf("%d", &coluna);

        if (linha == linhaNavio && coluna == colunaNavio) {
            printf("💥 Você acertou o navio!\n");
            tabuleiro[linha][coluna] = 'X'; // marca acerto
            acertou = 1;
            break;
        } else {
            printf("🌊 Água!\n");
            tabuleiro[linha][coluna] = 'O'; // marca erro
        }
    }

    if (!acertou) {
        printf("\n😢 Você perdeu! O navio estava em [%d][%d]\n", linhaNavio, colunaNavio);
        tabuleiro[linhaNavio][colunaNavio] = 'N'; // revela navio
    }

    mostrarTabuleiro(tabuleiro);
    printf("\nFim de jogo!\n");

    return 0;
}
