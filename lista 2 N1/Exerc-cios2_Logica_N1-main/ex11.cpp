#include <stdio.h>

int main() {
    float preco, valor;
    int codigo;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite o codigo de pagamento (1-4): ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        valor = preco - (preco * 0.10);
        printf("Valor final: R$ %.2f\n", valor);
    }
    else if (codigo == 2) {
        valor = preco - (preco * 0.15);
        printf("Valor final: R$ %.2f\n", valor);
    }
    else if (codigo == 3) {
        valor = preco;
        printf("Valor final: R$ %.2f\n", valor);
    }
    else if (codigo == 4) {
        valor = preco + (preco * 0.10);
        printf("Valor final: R$ %.2f\n", valor);
    }
    else {
        printf("Codigo de pagamento invalido.\n");
    }

    return 0;
}


