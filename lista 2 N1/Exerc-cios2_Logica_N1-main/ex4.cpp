#include <stdio.h>

int main() {
    int a, b, C;
    
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    
    if (a==b) {
		C = a+b; 
	}else{
		C = a * b;
	}
	
	 printf("O valor de C e: %d\n", C);
	 
	return 0;
	
} 
