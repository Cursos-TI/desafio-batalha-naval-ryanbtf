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

    //define o navio diagonal1
    int navio_diagonal1[3] = {3, 3, 3};
    int linha_d1 = 4;
    int coluna_d1 = 3;

    //posiciona o navio diagonal1 (coluna varia, linha varia)
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_d1 + i][coluna_d1 - i] = navio_diagonal1[i];
    }

    //define o navio diagonal2
    int navio_diagonal2[3] = {3, 3, 3};
    int linha_d2 = 7;
    int coluna_d2 = 3;

    //posiciona o navio diagonal2 (coluna varia, linha varia)
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_d2 + i][coluna_d2 + i] = navio_diagonal2[i];
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
