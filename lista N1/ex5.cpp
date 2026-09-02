#include <stdio.h>

int main() { 
	float salario, aumento, novoSalario;
	
	printf("Digite o salario do funcionario:\n");
	scanf("%f", &salario);
	
	aumento = salario * 0.25;
	printf("Seu aumento foi de: %.2f\n", aumento);
	
	novoSalario = salario + aumento;
	
	printf("O novo salario e: %.2f\n", novoSalario);

	return 0;

}
