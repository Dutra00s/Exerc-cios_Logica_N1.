#include <stdio.h>

int main() {
	float horas, valorhora, salmin, salbruto, final, imposto;
	
	printf("Digite o numero de horas trabalhadas:\n");
	scanf("%f", &horas);
	
	printf("Digite o valor do salario minimo:\n");
	scanf("%f", &salmin);
	
	valorhora = salmin/2;
	salbruto = horas*valorhora;
	imposto = salbruto*0.03;
	final = salbruto - imposto;
	
	printf("\n---Resultados---\n");
    printf("Valor da hora: R$ %.2f\n", valorhora);
    printf("Salario bruto: R$ %.2f\n", salbruto);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario a receber: R$ %.2f\n", final);
	
	return 0;
}
