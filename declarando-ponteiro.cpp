#include <stdio.h>
#include <stdlib.h>

main()
{
	int x;
	int *pont;
	
	x = 10;
	
	printf("\n\nO valor de X eh %d", x);
	
	pont = &x;
	
	*pont = 15;
	
	
	printf("\n\nO valor de pont eh %x", pont);
	printf("\n\nO lugar onde X pertence eh %x", &x);
	
	
}
