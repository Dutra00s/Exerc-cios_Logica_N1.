#include <stdio.h>

int main() {

    int vetor[6];

    for (int i = 0; i < 6; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nOrdem inversa:\n");

    for (int i = 5; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
