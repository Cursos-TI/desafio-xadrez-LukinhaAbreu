#include <stdio.h>

int main() {
     printf("Desafio Xadrez!\n");
     
    // Movimento da torre - for loop
    int movimentosTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do BISPO - while loop
    int movimentosBispo = 5;
    int contadorBispo = 0;
    printf("Movimento do Bispo:\n");
    while (contadorBispo < movimentosBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");
    // Movimento da RAINHA - do-while loop
    int movimentosRainha = 8;
    int contadorRainha = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentosRainha);

    printf("\n");
    // Movimento do CAVALO - loops aninhados
    // O cavalo se move em "L": 2 para baixo e 1 para a esquerda
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    printf("Movimento do Cavalo:\n");

    // Loop externo: movimentar em linha vertical (for)
    for (int i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop interno: movimentar perpendicularmente (while)
    int j = 0;
    while (j < movimentosEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}