#include <stdio.h>

int main() {
    float pesoSaco, racaoGato;
    float pesoGramas, consumoDiario, consumo5Dias, restante;

    printf("Digite o peso do saco de racao em kg:");
    scanf("%f", &pesoSaco);

    printf("Digite a quantidade de racao fornecida para cada gato por dia em gramas:");
    scanf("%f", &racaoGato);

    pesoGramas = pesoSaco*1000;
    consumoDiario = racaoGato*2;
    consumo5Dias = consumoDiario*5;
    restante = pesoGramas -consumo5Dias;

    printf("\n---Resultados---\n");
    printf("Racao restante apos cinco dias: %.2f gramas\n", restante);

    return 0;
}
