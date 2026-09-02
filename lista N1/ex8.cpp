#include <stdio.h>
#include <stdlib.h>

int main() { 
	float deposito, taxa, rendimento, total;
	
	printf("Digite o deposito em R$:\n");
	scanf("%f", &deposito);
	
	printf("Qual a taxa de juros em %%:\n");
	scanf("%f", &taxa);
	
	rendimento = deposito*(taxa/100);
	total = rendimento+deposito;
	
	printf("O rendimento foi de:%.2fR$ \n", rendimento);
	system("pause");
	printf("O total foi de:%.2fR$ \n", total);
	
	return 0;
	
}
