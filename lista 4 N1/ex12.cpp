#include <stdio.h>

int main() {

    float vetor[5];
    float soma = 0;
    float media;
    float maior;
    float menor;

    for (int i = 0; i < 5; i++) {

        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);

        soma = soma + vetor[i];
    }

    maior = vetor[0];
    menor = vetor[0];

    for (int i = 1; i < 5; i++) {

        if (vetor[i] > maior) {
            maior = vetor[i];
        }

        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    media = soma / 5;

    printf("\nValores:\n");

    for (int i = 0; i < 5; i++) {
        printf("%.2f\n", vetor[i]);
    }

    printf("\nMaior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Media: %.2f\n", media);

    return 0;
}
