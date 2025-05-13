#include <stdio.h>

int main() {
    // Movimento da Torre (usando for)
    printf("Movimento da Torre:\n");
    int casas_torre = 5;
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo 
    printf("Movimento do Bispo:\n");
    int casas_bispo = 5;
    int i = 0;
    while (i < casas_bispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // Movimento da Rainha 
    printf("Movimento da Rainha:\n");
    int casas_rainha = 8;
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casas_rainha);
    printf("\n");

     // Movimento do Cavalo 
    printf("Movimento do Cavalo:\n");
    int cavalo_para_baixo = 2;
    int cavalo_para_esquerda = 1;

    // Loop para os movimentos para baixo
    for (int i = 0; i < cavalo_para_baixo; i++) {
        printf("Baixo\n");
        // Este loop interno executa apenas na última iteração do loop externo
        for (int k = 0; i == cavalo_para_baixo - 1 && k < cavalo_para_esquerda; k++) {
            printf("Esquerda\n");
        }
        
    }


    return 0;
}