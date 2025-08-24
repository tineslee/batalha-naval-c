#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};

    // Cone (parte inferior do triângulo)
    for (int i = 0; i < 5; i++)
        for (int j = 4 - i; j <= 4 + i; j++)
            tabuleiro[i][j] = 1;

    // Cruz (linha e coluna centrais)
    for (int i = 0; i < 10; i++) {
        tabuleiro[5][i] = 1;
        tabuleiro[i][5] = 1;
    }

    // Octaedro (diamante central)
    for (int i = 0; i < 5; i++) {
        tabuleiro[4 - i][5 - i] = 1;
        tabuleiro[4 - i][5 + i] = 1;
        tabuleiro[4 + i][5 - i] = 1;
        tabuleiro[4 + i][5 + i] = 1;
    }

    // Exibe tabuleiro
    printf("=== Nível Mestre ===\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }

    return 0;
}

