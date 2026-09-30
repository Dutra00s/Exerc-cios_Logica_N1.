#include <stdio.h>

int main() {
    int codigo;

    printf("CARDAPIO\n");
    printf("1 - Hamburguer com fritas - R$ 28.00\n");
    printf("2 - File de frango grelhado - R$ 32.00\n");
    printf("3 - Lasanha a bolonhesa - R$ 35.00\n");
    printf("4 - File de peixe com arroz - R$ 42.00\n");
    printf("5 - Salada especial - R$ 25.00\n");

    printf("\nDigite o codigo do prato: ");
    scanf("%d", &codigo);

    switch (codigo) {

        case 1:
            printf("Prato: Hamburguer com fritas\n");
            printf("Valor: R$ 28.00\n");
            break;

        case 2:
            printf("Prato: File de frango grelhado\n");
            printf("Valor: R$ 32.00\n");
            break;

        case 3:
            printf("Prato: Lasanha a bolonhesa\n");
            printf("Valor: R$ 35.00\n");
            break;

        case 4:
            printf("Prato: File de peixe com arroz\n");
            printf("Valor: R$ 42.00\n");
            break;

        case 5:
            printf("Prato: Salada especial\n");
            printf("Valor: R$ 25.00\n");
            break;

        default:
            printf("Opcao invalida\n");
    }

    return 0;
}


