#include <stdio.h>

int main(){
	int vetor[8], x, y, soma;
	
	for(int i = 0; i < 8; i++){
		printf("Digite o valor %d: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	printf("Digite a primeira posicao X: ");
	scanf("%d", &x);
	
	printf("Digite a primeira posicao Y: ");
	scanf("%d", &y);
	
	soma = vetor[x] + vetor[y];
	
	printf("Soma = %d\n", soma);
	
	return 0;

}
