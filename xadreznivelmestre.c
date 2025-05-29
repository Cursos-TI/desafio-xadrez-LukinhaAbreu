#include <stdio.h>

// Função Recursiva: Movimento da Torre
void moverTorre(int passosRestantes){
    if (passosRestantes <= 0) return;
    printf("Direita\n");
    moverTorre(passosRestantes - 1);
}

// Função Recursiva: Movimento da Rainha
void moverRainha(int passosRestantes) {
    if (passosRestantes <= 0) return;
    printf("Esquerda\n");
    moverRainha(passosRestantes - 1);
}

// Função Recursiva: Movimento do Bispo (complementar aos loops aninhados)
void moverBispoRecursivo(int passosRestantes) {
    if (passosRestantes <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(passosRestantes - 1);
}

// Função para o Cavalo: movimento em "L" (duas casas para cima e uma para direita)
// Usando loops aninhados com múltiplas variáveis
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;
    int i, j;

    for (i = 1; i <= movimentosVerticais + 1; i++) {
        if (i > movimentosVerticais) {
            break; // parando ao atingir o número certo de movimentos para cima
        }

        printf("Cima\n");

        for (j = 1; j <= movimentosHorizontais + 1; j++) {
            if (j > movimentosHorizontais) {
                break;
            }

            if (i == 2 && j == 1) {
                // condição para completar o movimento em L
                printf("Direita\n");
                break; // finaliza o movimento "L"
            } else {
                continue; // ignora iterações que não correspondem ao "L"
            }
        }
    }
}

// Função para o Bispo com Loops Aninhados
// Loop externo = movimento vertical
// Loop interno = movimento horizontal
void moverBispoComLoops(int casas) {
    printf("Movimento do Bispo (loops aninhados):\n");

    for (int vertical = 0; vertical < casas; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }
}

int main() {
    // Torre: movimento recursivo
    int passosTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(passosTorre);

    printf("\n");
    // Bispo: recursivo
    int passosBispo = 5;
    printf("Movimento do Bispo (recursivo):\n");
    moverBispoRecursivo(passosBispo);

    printf("\n");
    // Bispo: com loops aninhados
    moverBispoComLoops(passosBispo);

    printf("\n");
    // Rainha: movimento recursivo
    int passosRainha = 8;
    printf("Movimento da Rainha:\n");
    moverRainha(passosRainha);

    printf("\n");
    // Cavalo: movimento complexo com loops aninhados
    moverCavalo();

    return 0;
}