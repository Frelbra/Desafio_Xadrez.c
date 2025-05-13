#include <stdio.h>

// Constantes de movimentos
#define PASSOS_BISPO 5
#define PASSOS_TORRE 5
#define PASSOS_RAINHA 8

// --- Funções Recursivas ---
// Movimento recursivo do Bispo: Diagonal direita para cima (Cima + Direita)
void moverBispoRecursivo(int passo) {
    if (passo == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(passo - 1);
}

// Movimento recursivo da Torre: 5 casas para Direita
void moverTorreRecursivo(int passo) {
    if (passo == 0) return;
    printf("Direita\n");
    moverTorreRecursivo(passo - 1);
}

// Movimento recursivo da Rainha: 8 casas para Esquerda
void moverRainhaRecursivo(int passo) {
    if (passo == 0) return;
    printf("Esquerda\n");
    moverRainhaRecursivo(passo - 1);
}

int main() {

    // Bispo: 5 passos na diagonal superior direita (Cima + Direita)
    printf("BISPO \n");

    for (int i = 0; i < PASSOS_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Torre: 5 passos para Direita
    printf("TORRE \n");

    int i = 0;
    while (i < PASSOS_TORRE) {
        printf("Direita\n");
        i++;
    }

    // Rainha: 8 passos para Esquerda
    printf("RAINHA \n");

    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < PASSOS_RAINHA);

    // Movimento do Cavalo em L (Baixo + Esquerda) com loops aninhados
    printf("CAVALO \n");
    for (int l = 0; l < 2; l++) {
        int k = 0;
        while (k < 1) {
            printf("Baixo\n");
            k++;
        }
        printf("Esquerda\n");
        printf("Esquerda\n");
    }

    // Bispo com recursão (Cima + Direita)
    printf("Bispo (Recursivo):\n");
    moverBispoRecursivo(PASSOS_BISPO);

    // Torre com recursão (Direita)
    printf("Torre (Recursivo):\n");
    moverTorreRecursivo(PASSOS_TORRE);

    // Rainha com recursão (Esquerda)
    printf("Rainha (Recursivo):\n");
    moverRainhaRecursivo(PASSOS_RAINHA);

    // Cavalo: 1 L para cima à direita usando loop com múltiplas variáveis e condições
    printf("Cavalo (L para cima à direita):\n");
    for (int a = 0, b = 2; a < 1 || b > 0; a++, b--) {
        if (a == 0) {
            printf("Cima\n");
            continue;
        }
        if (b == 1) {
            printf("Direita\n");
            printf("Direita\n");
            break;
        }
    }

    return 0;
}