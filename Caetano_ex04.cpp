#include <stdio.h>

int main() {
    int a;

    scanf("%d", &a);

    if (a < 30) {
        for(int i = -9; i < a; i++) {
            printf("%d\n", i);
        }
    }

    else if (a > 30 && a < 101) {
        int aux, aux2 = 0;
        aux = a - 10;
        int vetor[aux];
        for(int i = a; i > 10; i--) {
            vetor[aux2] = i - 1;
            aux2++;
        }

        for(int i = 0; i < aux - 1; i++) {
            printf("%d\n", vetor[i]);
        }
    }

    else if (a > 100) {
        for(int i = 51; i < a; i++) {
            printf("%d\n", i);
        }
    }

    return 0;
}