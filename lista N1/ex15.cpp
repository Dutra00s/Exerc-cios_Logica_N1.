#include <stdio.h>

int main() {
	float preco, percLucro, percImp, lucro, imposto, final;
	
	printf("Digite o preco do carro novo:\n");
	scanf("%f", &preco);
	
	printf("Digite o percentual do lucro do distribuidor:\n");
	scanf("%f", &percLucro);
	
	printf("Digite o percentual de impostos:\n");
    scanf("%f", &percImp);
	
	lucro = preco*percLucro/100;
	imposto = preco*percImp/100;
	final = preco+lucro+imposto;
	
	printf("\n---Resultados---\n");
    printf("A)Lucro do distribuidor: R$ %.2f\n", lucro);
    printf("B)Impostos: R$ %.2f\n", imposto);
    printf("C)Preco final: R$ %.2f\n", final);
	
}
