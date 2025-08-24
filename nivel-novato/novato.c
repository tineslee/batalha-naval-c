#include <stdio.h>

int main() {
    // Tabuleiro 5x5
    char tabuleiro[5][5];

    // Inicializa com água
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            tabuleiro[i][j] = '~';

    // Navio vertical (coluna 1, linhas 0 a 2)
    for (int i = 0; i < 3; i++)
        tabuleiro[i][1] = 'V';

    // Navio horizontal (linha 4, colunas 2 a 4)
    for (int j = 2; j <= 4; j++)
        tabuleiro[4][j] = 'H';

    // Exibe coordenadas dos navios
    printf("=== Nível Novato ===\n");
    printf("Coordenadas dos navios:\n");

    printf("Navio Vertical:\n");
    for (int i = 0; i < 3; i++)
        printf("  [%d][1]\n", i);

    printf("Navio Horizontal:\n");
    for (int j = 2; j <= 4; j++)
        printf("  [4][%d]\n", j);

    return 0;
}