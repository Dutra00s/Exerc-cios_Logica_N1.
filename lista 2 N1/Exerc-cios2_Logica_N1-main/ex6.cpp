#include <stdio.h>

int main() {
    int A, B;

    printf("Digite o primeiro valor (0 para FALSO e 1 para VERDADEIRO): ");
    scanf("%d", &A);

    printf("Digite o segundo valor (0 para FALSO e 1 para VERDADEIRO): ");
    scanf("%d", &B);

    if (A == 1 && B == 1) {
        printf("Ambos sao VERDADEIROS.\n");
    } else if (A == 0 && B == 0) {
        printf("Ambos sao FALSOS.\n");
    } else {
        printf("Os valores sao diferentes.\n");
    }

    return 0;
} 
