#include <stdio.h>
#include <stdlib.h>

int main() {
	int numero;
	float nota1, nota2, nota3, me, ma;
	char conceito;
	
	printf("Digite seu numero de identificacao: ");
	scanf("%d", &numero);
	
	printf("Digite a nota 1: ");
	scanf("%f", &nota1);
	
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);
	
	printf("Digite a nota 3: ");
	scanf("%f", &nota3);
	
	system("cls");
	
	me = (nota1 + nota2 + nota3) / 3;
	
	printf("A media dos exercicios e: %.2f", me);
	
	ma = (nota1 + (nota2 * 2) + (nota3 * 3) + me) / 0.7;
	
	if (ma >= 90) {
		conceito = 'A';
	}
	else if (ma >=75) {
		conceito = 'B';
	}
	else if (ma >= 60) {
		conceito = 'C';
	}
	else if (ma >= 40) {
		conceito = 'D';
	}
	else {
		conceito = 'E';
	}
	
	printf("\nNumero de identificacao: %d\n", numero); 
	printf("Nota 1: %.2f\n", nota1); 
	printf("Nota 2: %.2f\n", nota2); 
	printf("Nota 3: %.2f\n", nota3); 
	printf("Media dos exercicios: %.2f\n", me); 
	printf("Media de aproveitamento: %.2f\n", ma); 
	printf("Conceito: %c\n", conceito); 
	
	if (conceito == 'A' || conceito == 'B' || conceito == 'C') { 
		printf("Situacao: Aprovado\n"); 
	} 
	else { 
		printf("Situacao: Reprovado\n"); 
	} 
	return 0;
}
