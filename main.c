#include <stdio.h>

/*
    Simulação de Movimentos no Xadrez
    Nível: Novato
    Peças: Torre, Bispo e Rainha
    Objetivo:
    - Torre: 5 casas para a direita (for)
    - Bispo: 5 casas para cima e à direita (while)
    - Rainha: 8 casas para a esquerda (do-while)
*/

int main(void) {
    // Quantidade de casas para cada peça (valores fixos)
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ---------- TORRE ----------
    printf("Movimento da TORRE:\n");
    // Torre se move em linha reta (horizontal ou vertical)
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // ---------- BISPO ----------
    printf("\nMovimento do BISPO:\n");
    // Bispo se move na diagonal: combina duas direções
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // ---------- RAINHA ----------
    printf("\nMovimento da RAINHA:\n");
    // Rainha pode se mover como torre ou bispo
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}