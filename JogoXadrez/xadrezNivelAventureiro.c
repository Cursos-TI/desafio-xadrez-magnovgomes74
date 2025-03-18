#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {
    // Nível Aventureiro - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
   
    int i, j = 1, k = 1; //Nível Novato
    int passoVertical, passoHorizontal = 1; //Nível Aventureiro


    // Implementação de Movimentação do Bispo
    // Movimento da Torre (usando for) - 5 casas para a direita

    printf("Movimento da Torre:\n\n");

    for (i = 1; i <= 5; i++) {
        printf("Direita %d\n", i);
    }

    printf("\n\n");

    
    // Implementação de Movimentação da Torre
    // Movimento do Bispo (usando while) - 5 casas na diagonal (Cima, Direita)
   
    printf("Movimento do Bispo:\n\n");

    while (j <= 5) {
        printf("Diagonal (Cima, Direita) %d\n", j);
        j++;
    }

    printf("\n\n");    


    // Implementação de Movimentação da Rainha
    // Movimento da Rainha (usando do-while) - 8 casas para a esquerda

    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda %d\n", k);
        k++;

    } 
    while (k <= 8);

    printf("\n\n");


    // Nível Aventureiro - Movimentação do Cavalo
    // Implementação de Movimentação do Cavalo para o nível Aventureiro;
    // Movimento usando (for e while) - 2 casas para baixo e 1 para a esquerda

    printf("Movimento do Cavalo:\n\n");

    for (passoVertical = 1; passoVertical <= 2; passoVertical++) {
        printf("Baixo %d\n", passoVertical);
    }

    while (passoHorizontal <= 1) {
        printf("Esquerda %d\n", passoHorizontal);
        passoHorizontal++;
    }

    printf("\n\n");

    return 0;
}
