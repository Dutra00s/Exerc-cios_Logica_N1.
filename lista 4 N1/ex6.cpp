#include <stdio.h>

int main() {

    int vetor[10];
    int maior;
    int menor;

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (int i = 1; i < 10; i++) {

        if (vetor[i] > maior) {
            maior = vetor[i];
        }

        if (vetor[i] < menor) {
            menor = vetor[i];
        }

    }

    printf("Maior = %d\n", maior);
    printf("Menor = %d\n", menor);

    return 0;
}
