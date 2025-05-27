#include <stdio.h>

/*
* Função recursiva para movimentar a Torre.
* A cada chamada, imprime a direção e diminui o numero de casas.
*/

// Funções recursivas para Torre, Bispo e Rainha
void moverTorre(int casas, char direcao[]) {
    if (casas == 0) return;  // Caso base: não há mais casas para mover
    printf("Torre moveu para %s\n", direcao);
    moverTorre(casas - 1, direcao);  // Chamada recursiva
}

/*
*  Função recusiva para movimentar o Bispo.
*  A cada chamada, imprime o movimento na diagonal e reduz as casas.
*/

void moverBispo(int casasDiagonais) {
    if (casasDiagonais == 0) return;  // Caso base
    printf("Bispo moveu para Diagonal\n");
    moverBispo(casasDiagonais - 1);  // Chamada recursiva
}

/*
* Função recursiva para movimentar a Rainha.
* Recebe a direção e o número de casas.
*/

void moverRainha(int casas, char direcao[]) {
    if (casas == 0) return;    // Caso base
    printf("Rainha moveu para %s\n", direcao);
    moverRainha(casas - 1, direcao);  // Chamada recursiva
}

/*
* Função para movimentar o Cavalo utilizando loops complexos.
* O loop externo controla o número de movimentos em "L".
* O loop interno alterna entre duas direcões de movimento.
*/

// Função para o Cavalo com loops complexos
void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {  // Loop externo: número de movimentos
        for (int j = 0; j < 2; j++) { //  Loop interno: duas direções em "L",2 direções: "L" padrão,
            if (j == 0) {
                printf("Cavalo moveu para 2 cima e 1 direita\n");
            } else {
                printf("Cavalo moveu para 2 direita e 1 cima\n");
            }
        }
    }
}

/*
* Função principal: controla o fluxo do programa.
*Define as chamadas para cada peça, conforme o desafio.
*/

// Programa principal
int main() {
    // Movimentação da Torre: mover 3 casas para cima
    printf("\nMovimento da Torre:\n");
    moverTorre(3, "Cima");

    // Movimentaçãoo do Bispo: mover 2 casas na diagonal
    printf("\nMovimento do Bispo:\n");
    moverBispo(2);

    // Movimentação da Rainha: mover 4 casas para baixo
    printf("\nMovimento da Rainha:\n");
    moverRainha(4, "Baixo");

    // Movimentação do Cavalo: fazer 2 movimentos em "L"
    printf("\nMovimento do Cavalo:\n");
    moverCavalo(2);

    return 0;
}