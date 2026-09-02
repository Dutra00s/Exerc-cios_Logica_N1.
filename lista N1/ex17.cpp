#include <stdio.h>

int main() {
    float salario, cheque1, cheque2, cpmf1, cpmf2, saldo;

    printf("Digite o valor do salario:");
    scanf("%f", &salario);

    printf("Digite o valor do primeiro cheque:");
    scanf("%f", &cheque1);

    printf("Digite o valor do segundo cheque:");
    scanf("%f", &cheque2);

    cpmf1 = cheque1 * 0.0038;
    cpmf2 = cheque2 * 0.0038;

    saldo = salario - cheque1 - cheque2 - cpmf1 - cpmf2;

    printf("\n---Resultados---\n");
    printf("CPMF do primeiro cheque: R$ %.2f\n", cpmf1);
    printf("CPMF do segundo cheque: R$ %.2f\n", cpmf2);
    printf("Saldo atual: R$ %.2f\n", saldo);

    return 0;
}
