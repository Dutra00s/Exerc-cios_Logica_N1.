#include <stdio.h>

int main() {

    int vetor[10];
    int maior;
    int posicaoMaior;

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    posicaoMaior = 0;

    for (int i = 1; i < 10; i++) {

        if (vetor[i] > maior) {
            maior = vetor[i];
            posicaoMaior = i;
        }

    }

    printf("\nVetor:\n");

    for (int i = 0; i < 10; i++) {
        printf("%d\n", vetor[i]);
    }

    printf("\nMaior elemento: %d\n", maior);
    printf("Posicao: %d\n", posicaoMaior);

    return 0;
}
