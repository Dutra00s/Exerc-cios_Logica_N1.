#include <stdio.h>

int main() {

    int vetor[6];

    for (int i = 0; i < 6; i++) {

        printf("Digite um numero par: ");
        scanf("%d", &vetor[i]);

        while (vetor[i] % 2 != 0) {

            printf("Numero invalido. Digite um numero par: ");
            scanf("%d", &vetor[i]);

        }
    }

    printf("\nOrdem inversa:\n");

    for (int i = 5; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
