#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};

    // Navio diagonal 1 (↘)
    for (int i = 0; i < 4; i++)
        tabuleiro[i][i] = 3;

    // Navio diagonal 2 (↙)
    for (int i = 0; i < 4; i++)
        tabuleiro[i][9 - i] = 3;

    // Navio vertical (coluna 5, linhas 2 a 5)
    for (int i = 2; i <= 5; i++)
        tabuleiro[i][5] = 3;

    // Navio horizontal (linha 7, colunas 3 a 6)
    for (int j = 3; j <= 6; j++)
        tabuleiro[7][j] = 3;

    // Exibe tabuleiro
    printf("=== Nível Aventureiro ===\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }

    return 0;
}