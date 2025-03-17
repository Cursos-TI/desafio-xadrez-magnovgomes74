#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Movimento da Torre (usando for) - 5 casas para a direita

    printf("Movimento da Torre:\n\n");

    for (int i = 1; i <= 5; i++) {
        printf("Direita %d\n", i);
    }

    printf("\n\n");

    
    // Implementação de Movimentação da Torre
    // Movimento do Bispo (usando while) - 5 casas na diagonal (Cima, Direita)
   
    printf("Movimento do Bispo:\n\n");

    int j = 1;

    while (j <= 5) {
        printf("Diagonal (Cima, Direita) %d\n", j);
        j++;
    }

    printf("\n\n");    


    // Implementação de Movimentação da Rainha
    // Movimento da Rainha (usando do-while) - 8 casas para a esquerda

    printf("Movimento da Rainha:\n");

    int k = 1;

    do {
        printf("Esquerda %d\n", k);
        k++;

    } 
    while (k <= 8);
    

    printf("\n\n");


    return 0;
}
