#include <stdio.h>

int main() { 
	float raio, area;
	
	printf("Qual e o raio do circulo:\n");
	scanf("%f",  &raio);
	
	area = (raio*raio)*3.14;
	
	printf("A area do circulo e:%.2f\n", area);	
	
	return 0;
}
