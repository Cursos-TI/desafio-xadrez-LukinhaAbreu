#include <stdio.h>

int main() {
    printf("Desafio Xadrez!\n");
    // Movimento da Torre
    // Utilizando estrutura de repetição: for
    int movimentosTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do Bispo
    // Utilizando estrutura de repetição: while
    int movimentosBispo = 5;
    int contadorBispo = 0;
    printf("Movimento do Bispo:\n");
    while (contadorBispo < movimentosBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // Movimento da Rainha
    // Utilizando estrutura de repetição: do-while
    int movimentosRainha = 8;
    int contadorRainha = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentosRainha);

    return 0;
}
