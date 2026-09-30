#include <stdio.h>

int main() {
    float limite, velocidade, percentual;

    printf("Digite a velocidade maxima permitida: ");
    scanf("%f", &limite);

    printf("Digite a velocidade registrada: ");
    scanf("%f", &velocidade);

    if (velocidade <= limite) {
        percentual = 0;

        printf("\nLimite da via: %.2f km/h\n", limite);
        printf("Velocidade registrada: %.2f km/h\n", velocidade);
        printf("Percentual excedido: %.2f%%\n", percentual);
        printf("Nao houve infracao.\n");
    }
    else {
        percentual = ((velocidade - limite) / limite) * 100;

        printf("\nLimite da via: %.2f km/h\n", limite);
        printf("Velocidade registrada: %.2f km/h\n", velocidade);
        printf("Percentual excedido: %.2f%%\n", percentual);

        if (percentual <= 20) {
            printf("Infracao media.\n");
        }
        else if (percentual <= 50) {
            printf("Infracao grave.\n");
        }
        else {
            printf("Infracao gravissima.\n");
        }

        if (velocidade > 120) {
            printf("Alerta: velocidade extremamente elevada!\n");
        }
    }

    return 0;
}



