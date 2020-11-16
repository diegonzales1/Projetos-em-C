#include <stdio.h>
#include <stdlib.h>

void soma(int *c1, int *d1);
main(){
	
	int a1, b1;
	
	printf("Digite dois numeros: ");
	scanf("%i", &a1);
	scanf("%i", &b1);
	
	soma(&a1, &b1);
	
	printf("\n\nA soma de a1 + b1 = %d, e a multiplicacao de a1 x b1 = %d", a1, b1);
	
}

void soma(int *c1, int *d1)
{
	int temp = *c1;
	
	*c1 = (*c1) + (*d1);
	
	*d1 = (*d1) * (temp);
	
}
