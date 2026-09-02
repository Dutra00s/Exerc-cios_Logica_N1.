#include <stdio.h>

int main() { 
	float altura, base, area;
	
	printf("Qual a altura do triangulo:\n");
	scanf("%f",  &altura);
	
	printf("Qual a base do triangulo:\n");
	scanf("%f",  &base);
	
	area = (base * altura)/2;
	
	printf("A area do triangulo e:%.2f\n", area);	
	
	return 0;
}
