#include <stdio.h>

int main() {
    int a, C;
    
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    
    if (a>0) {
		C = a*2; 
	}
	if (a<0){
		C = a*3;
	}
	
	 printf("O valor de C e: %d\n", C);
	 
	return 0;
	
}
