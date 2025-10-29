#include <stdio.h>

int main() {
    // Simulação do movimento da Torre usando estrutura FOR
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n"); // A torre se move para a direita
    }

    // Simulação do movimento do Bispo usando estrutura WHILE
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n"); // O bispo se move na diagonal para cima e à direita
        contadorBispo++;
    }

    // Simulação do movimento da Rainha usando estrutura DO-WHILE
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n"); // A rainha se move para a esquerda
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}