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
    
    //define habilidade cone
    int habilidade_cone[3][5] = {
        {0,0,5,0,0},
        {0,5,5,5,0},
        {5,5,5,5,5}};
    int linha_cone = 0;
    int coluna_cone = 2;

    //posiciona a habilidade cone
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            int valor = habilidade_cone[i][j];
                if (valor != 0) {
                    int linha = linha_cone + i;
                    int coluna = coluna_cone + j - 2;  // centraliza o cone horizontalmente
                    if (linha >= 0 && linha < tamanho && coluna >= 0 && coluna < tamanho) {
                        tabuleiro[linha][coluna] = valor;
                }
            }
        }
    }

    //define a habilidade octaedro
    int habilidade_octaedro[3][5] = {
        {0,0,5,0,0},
        {0,5,5,5,0},
        {0,0,5,0,0}};
    int octaedro_linha = 6;
    int octaedro_coluna = 2;

    //posiciona habilidade octaedro
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            int valor = habilidade_octaedro[i][j];
                if (valor != 0) {
                    int linha = octaedro_linha + i;
                    int coluna = octaedro_coluna + j;
                if (linha >= 0 && linha < tamanho && coluna >= 0 && coluna < tamanho) {
                    tabuleiro[linha][coluna] = valor;
                }
            }
        }
    }

    //define habilidade cruz
    int habilidade_cruz[3][5] = {
        {0,0,5,0,0},
        {5,5,5,5,5},
        {0,0,5,0,0}};
    int cruz_linha = 0;
    int cruz_coluna = 7;

    //posiciona a habilidade cruz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            int valor = habilidade_cruz[i][j];
                if (valor != 0) {
                    int linha = cruz_linha + i;
                    int coluna = cruz_coluna + j - 2; // centraliza horizontalmente
                if (linha >= 0 && linha < tamanho && coluna >= 0 && coluna < tamanho) {
                    tabuleiro[linha][coluna] = valor;
                }
            }
        }
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
