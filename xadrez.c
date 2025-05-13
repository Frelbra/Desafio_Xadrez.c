#include <stdio.h>

int main() {
    
    int i;

    // Movimento da TORRE: 5 casas para a direita (usando for)
    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do BISPO: 5 casas na diagonal para cima e à direita (usando while)
    printf("\nMovimento do Bispo:\n");
    i = 0;
    while (i < 5) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimento da RAINHA: 8 casas para a esquerda (usando do-while)
    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);
    printf("\n");

    const int passos_baixo = 2;
    const int passos_esquerda = 1;

    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < passos_baixo; i++) {
        printf("Baixo\n");
    }

    // Loop while para movimento para esquerda (1 vez)
    int contador = 0;
    while (contador < passos_esquerda) {
        printf("Esquerda\n");
        contador++;
    }

    return 0;
}