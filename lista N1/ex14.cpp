#include <stdio.h>

int main() {
int nascimento, atual, idade, idade2;
    
    printf("Digite seu ano de nascimento:\n");
    scanf("%d", &nascimento);
    
    printf("Digite o ano atual:\n");
    scanf("%d", &atual);
    
    idade = atual - nascimento;
    idade2 = 2050 - nascimento;
    
    printf("\n---Resultados---\n");
    printf("Voce tem %d anos\n", idade);
    printf("Voce tera %d anos em 2050", idade2);
    
    
    return 0;
}
