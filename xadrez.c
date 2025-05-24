#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função recursiva para movimentar a Torre
void moverTorre(int passos) {
    if (passos == 0) return; // Condição de parada
    printf("Movimento %d: Direita\n", passos);
    moverTorre(passos - 1); // Chamando recursivamente
}

int main() {
    printf("Movimento Recursivo da Torre:\n");
    moverTorre(5); // Movendo 5 casas para a direita
    return 0;
}
