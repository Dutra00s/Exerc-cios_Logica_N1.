#include <stdio.h>

int main() {
    int a, C;

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);

    if(a % 2 == 0){
        C = a+5;
    }else{
        C = a+8;
    }

	printf("O valor de C e: %d\n", C);
	
    return 0;
} 
