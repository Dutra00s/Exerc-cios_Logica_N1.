#include <stdio.h>
#include <stdlib.h>

int main() { 
	float salariobase, receber, gratificacao, imposto;
	
	printf("Digite o salario do funcionario:\n");
	scanf("%f", &salariobase);
	
	printf("Seu salario base e:%.2f\n", salariobase);
	gratificacao = salariobase + 50;
	imposto = salariobase * 0.1;
	
	receber = gratificacao-imposto;
	printf("Seu salario a receber e: %.2fR$\n", receber);

	return 0;
}
