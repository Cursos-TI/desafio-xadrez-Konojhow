#include <stdio.h>

int main() {
    // Movimento da Torre (usando for)
    printf("Movimento da Torre:\n");
    int casas_torre = 5;
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo (usando while)
    printf("Movimento do Bispo:\n");
    int casas_bispo = 5;
    int i = 0;
    while (i < casas_bispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // Movimento da Rainha (usando do-while)
    printf("Movimento da Rainha:\n");
    int casas_rainha = 8;
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casas_rainha);
    printf("\n");

    return 0;
}