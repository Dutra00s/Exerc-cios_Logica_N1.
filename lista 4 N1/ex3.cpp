#include <stdio.h>

int main() {

    float numeros[10];
    float quadrados[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &numeros[i]);

        quadrados[i] = numeros[i] * numeros[i];
    }

    printf("\nNumeros:\n");

    for (int i = 0; i < 10; i++) {
        printf("%.2f\n", numeros[i]);
    }

    printf("\nQuadrados:\n");

    for (int i = 0; i < 10; i++) {
        printf("%.2f\n", quadrados[i]);
    }

    return 0;
}
