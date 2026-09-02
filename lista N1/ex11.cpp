A) #include <stdio.h>

int main() { 
	float n1, valor;
	
	printf("Digite um numero:\n");
	scanf("%f",  &n1);
	
	valor = (n1*n1);
	
	printf("O numero ao quadrado e:%.2f\n", valor);	
	
	return 0;
}
--------------------------
B) #include <stdio.h>

int main() { 
	float n1, valor;
	
	printf("Digite um numero:\n");
	scanf("%f",  &n1);
	
	valor = (n1*n1*n1);
	
	printf("O numero ao cubo e:%.2f\n", valor);	
	
	return 0;
}
------------------------
C) #include <stdio.h>
#include <math.h>

int main() { 
	float n1, valor;
	
	printf("Digite um numero:\n");
	scanf("%f",  &n1);
	
	valor = sqrt(n1);
	
	printf("A raiz do numero digitado e:%.2f\n", valor);	
	
	return 0;
}
----------------------
D) #include <stdio.h>
#include <math.h>

int main() { 
	float n1, valor;
	
	printf("Digite um numero:\n");
	scanf("%f",  &n1);
	
	valor = cbrt(n1);
	
	printf("A raiz cubica do numero digitado e:%.2f\n", valor);	
	
	return 0;
}
