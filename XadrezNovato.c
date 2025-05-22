#include <stdio.h>

int main () {
    // Movimento da Torre - FOR
    printf("Movimento da Torre:\n");
    // Laço for: repete 5 vezes
    for (int passoTorre = 1; passoTorre <= 5; passoTorre++) {
        // A torre se move para a direita
        printf("Passo %d: Direita\n", passoTorre);
    }

    // Movimento do Bispo - WHILE
    printf("\nMovimento do Bispo:\n");

    int passoBispo = 1; // Variável de controle para o while
    while (passoBispo <=5) {
        // O bispo se move na diagonal: cima + direita
        printf("Passo %d: Cima Direita\n", passoBispo);
        passoBispo++; // Incrementa o passo
    }

    // Movimento da Rainha - DO-WHILE
    printf("\nMovimento da Rainha:\n");

    int passoRainha = 1; // Variável de controle para o do-while
    do {
        // A rainha se move para a esquerda
        printf("Passo %d: Esquerda\n", passoRainha);
        passoRainha++; // Incrementa o passo
    } while (passoRainha <= 8); // Repete até completar 8 passo

    return 0; // Fim do programa
}