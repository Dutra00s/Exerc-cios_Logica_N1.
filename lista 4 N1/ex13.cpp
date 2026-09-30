#include <stdio.h>

int main() {

    float vetor[5];

    float maior;
    float menor;

    int posicaoMaior;
    int posicaoMenor;

    for (int i = 0; i < 5; i++) {

        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    posicaoMaior = 0;
    posicaoMenor = 0;

    for (int i = 1; i < 5; i++) {

        if (vetor[i] > maior) {
            maior = vetor[i];
            posicaoMaior = i;
        }

        if (vetor[i] < menor) {
            menor = vetor[i];
            posicaoMenor = i;
        }
    }

    printf("\nMaior valor: %.2f\n", maior);
    printf("Posicao do maior: %d\n", posicaoMaior);

    printf("\nMenor valor: %.2f\n", menor);
    printf("Posicao do menor: %d\n", posicaoMenor);

    return 0;
}
