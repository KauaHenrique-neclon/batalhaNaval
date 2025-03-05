#include <stdio.h>
#include <stdlib.h>

// ele define o tamanho do tabuleiro
#define LINHA 10
#define COLUNA 10


// função de criamento do tabuleiro
// ele precorre todo a variavel LINHA e COLUNA definida
// o i precorre a linha e j precorre a COLUNA
void iniciarTabuleiro(int tabuleiro[LINHA][COLUNA]) {
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

// essa função cria um cone no tabuleiro, ele cria fazendo ele 
// voltar na casa para criar
void aplicarHabilidadeCone(int tabuleiro[LINHA][COLUNA], int linha, int coluna) {
    for (int i = -2; i <= 2; i++) {
        for (int j = -2; j <= 2; j++) {
            if (i + j >= 0 && i + j <= 4) {
                int x = linha + i;
                int y = coluna + j;
                if (x >= 0 && x < LINHA && y >= 0 && y < COLUNA) {
                    tabuleiro[x][y] = 1;
                }
            }
        }
    }
}

// essa função cria uma cruz no tabuleiro, ele cria fazendo ele 
// voltar na casa para criar
void aplicarHabilidadeCruz(int tabuleiro[LINHA][COLUNA], int linha, int coluna) {
    for (int i = -2; i <= 2; i++) {
        if (linha + i >= 0 && linha + i < LINHA) {
            tabuleiro[linha + i][coluna] = 1;
        }
        if (coluna + i >= 0 && coluna + i < COLUNA) {
            tabuleiro[linha][coluna + i] = 1; 
        }
    }
}

// essa função cria um octaedro no tabuleiro, ele cria fazendo ele 
// voltar na casa para criar
void aplicarHabilidadeOctaedro(int tabuleiro[LINHA][COLUNA], int linha, int coluna) {
    for (int i = -2; i <= 2; i++) {
        for (int j = -2; j <= 2; j++) {
            if (abs(i) + abs(j) <= 2) {
                int x = linha + i;
                int y = coluna + j;
                if (x >= 0 && x < LINHA && y >= 0 && y < COLUNA) {
                    tabuleiro[x][y] = 1;
                }
            }
        }
    }
}

// Ele exibe no tabuleiro o resultado
void exibirTabuleiro(int tabuleiro[LINHA][COLUNA]) {
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// função main do codigo
int main() {
    int tabuleiro[LINHA][COLUNA];

    iniciarTabuleiro(tabuleiro);

    aplicarHabilidadeCone(tabuleiro, 5, 5);
    aplicarHabilidadeCruz(tabuleiro, 2, 2);
    aplicarHabilidadeOctaedro(tabuleiro, 8, 8);

    exibirTabuleiro(tabuleiro);
    // returna 0
    return 0;
}