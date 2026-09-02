#include <stdio.h>

int main() {
    float pes, polegadas, jardas, milhas;

    printf("Digite uma medida em pes: ");
    scanf("%f", &pes);
    
    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = pes / (3 * 1760);

    printf("\n---Resultados---\n");
    printf("Polegadas: %.2f\n", polegadas);
    printf("Jardas: %.2f\n", jardas);
    printf("Milhas: %.6f\n", milhas);

    return 0;
}
