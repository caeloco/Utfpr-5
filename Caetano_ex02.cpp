#include <stdio.h>

int main() {
    int aux = 20, vetor[20];
    for(int i = 0; i < 20; i++) {
        vetor[i] = aux - i;
    }

    for(int i = 0; i < 20; i++) {
        printf("Posicao [%d]: %d\n", i, vetor[i]);
    }

    return 0;
}