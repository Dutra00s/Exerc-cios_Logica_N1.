#include <stdio.h>

int main(){
	int vetor[10], contador = 0;
	
	for (int i = 0; i < 10; i++){
		printf("Digite um valor %d: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	for (int i = 0; i < 10; i++){
		if (vetor[i] % 2 ==0){
			contador++;
		}
	}
	
	printf("Quantidade de valores pares: %d\n", contador);
	
	return 0;
}
