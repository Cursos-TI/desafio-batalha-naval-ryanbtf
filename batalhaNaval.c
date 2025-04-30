#include <stdio.h>

int main() {
    int tamanho = 10;
    int tamanho_navio = 3;
    int tabuleiro[10][10];  //tamanho fixo

    //inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    //define o navio horizontal
    int navio_horizontal[3] = {3, 3, 3};
    int linha_h = 2;
    int coluna_h = 4;

    //posiciona o navio horizontal (linha fixa, coluna varia)
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_h][coluna_h + i] = navio_horizontal[i];
    }

    //define o navio vertical
    int navio_vertical[3] = {3, 3, 3};
    int linha_v = 5;
    int coluna_v = 7;

    //posiciona o navio vertical (coluna fixa, linha varia)
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_v + i][coluna_v] = navio_vertical[i];
    }

    //exibe o tabuleiro
    printf("Tabuleiro Batalha Naval:\n\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
