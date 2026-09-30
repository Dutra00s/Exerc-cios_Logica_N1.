#include <stdio.h>

int main() {

    float vetor[10];
    int negativos = 0;
    float somaPositivos = 0;

    for (int i = 0; i < 10; i++) {

        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {

        if (vetor[i] < 0) {
            negativos++;
        }
        else if (vetor[i] > 0) {
            somaPositivos = somaPositivos + vetor[i];
        }

    }

    printf("\nQuantidade de negativos: %d\n", negativos);
    printf("Soma dos positivos: %.2f\n", somaPositivos);

    return 0;
}
