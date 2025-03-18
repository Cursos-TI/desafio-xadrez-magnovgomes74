#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Mestre - Movimentação das Peças

// Implementação de funções recursivas e loops aninhados para movimentação das peças.
// Função recursiva para movimentação da Torre (Direita)
void moverTorre(int casas) {

    if (casas == 0) return;
    printf("Direita %d\n", 6 - casas);

    moverTorre(casas - 1);
}


// Função recursiva para movimentação do Bispo (Diagonal Cima-Direita)
void moverBispoRecursivo(int casas) {

    if (casas == 0) return;
    printf("Diagonal (Cima, Direita) %d\n", 6 - casas);

    moverBispoRecursivo(casas - 1);
}


// Função recursiva para movimentação da Rainha (Esquerda)
void moverRainha(int casas) {

    if (casas == 0) return;
    printf("Esquerda %d\n", 9 - casas);

    moverRainha(casas - 1);
}


// Função para movimentação do Bispo com loops aninhados
void moverBispoLoop(int casas) {
    printf("Movimento do Bispo (com loops aninhados):\n\n");

    for (int i = 1; i <= casas; i++) {
        for (int j = 1; j <= 1; j++) {

            printf("Diagonal (Cima, Direita) %d\n", i);
        }
    }
    printf("\n");
}


// Função para movimentação do Cavalo
void moverCavalo() {
    printf("Movimento do Cavalo(Loops Complexos):\n\n");
    
    for (int i = 1; i <= 2; i++) {
        printf("Cima %d\n", i);
    }
    
    for (int j = 1; j <= 1; j++) {
        printf("Direita %d\n", j);
    }
    
    printf("\n");
}


int main() {

    // Chamada das funções modificadas
    printf("Movimento da Torre:\n\n");
    moverTorre(5);
    printf("\n\n");
    

    printf("Movimento do Bispo (Recursivo):\n\n");
    moverBispoRecursivo(5);
    printf("\n\n");

    
    printf("Movimento da Rainha:\n\n");
    moverRainha(8);
    printf("\n\n");
    
    moverBispoLoop(5);
    
    moverCavalo();

    printf("\n\n");
    
    return 0;
}
