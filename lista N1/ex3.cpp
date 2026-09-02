#include <stdio.h>

int main() { 
	float n1, n2, n3, media;
	int p1, p2, p3;
	
	scanf("%f", &n1);
	printf("peso nota 1:\n");
	scanf("%d", &p1);
	
	scanf("%f", &n2);
	printf("peso nota 2:\n");
	scanf("%d", &p2);
	
	scanf("%f", &n3);
	printf("peso nota 3:\n");
	scanf("%d", &p3);
	
	media = ((n1*p1)+(n2*p2)+(n3*p3)) / (p1+p2+p3);

	printf("%.2f\n", media);
	
	return 0;
	
}#include <stdio.h>

int main() { 
	float n1, n2, n3, media;
	int p1, p2, p3;
	
	scanf("%f", &n1);
	printf("peso nota 1:\n");
	scanf("%d", &p1);
	
	scanf("%f", &n2);
	printf("peso nota 2:\n");
	scanf("%d", &p2);
	
	scanf("%f", &n3);
	printf("peso nota 3:\n");
	scanf("%d", &p3);
	
	media = ((n1*p1)+(n2*p2)+(n3*p3)) / (p1+p2+p3);

	printf("%.2f\n", media);
	
	return 0;
	
}
