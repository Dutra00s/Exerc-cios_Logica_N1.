#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char sexo;
    char estadoCivil[20];
    int tempoCasamento;

    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite o sexo (F/M): ");
    scanf(" %c", &sexo);

    printf("Digite o estado civil: ");
    scanf("%s", estadoCivil);

    if (sexo == 'F' && strcmp(estadoCivil, "CASADA") == 0) {
        printf("Digite o tempo de casamento em anos: ");
        scanf("%d", &tempoCasamento);
    }

    return 0;
} questao 2
