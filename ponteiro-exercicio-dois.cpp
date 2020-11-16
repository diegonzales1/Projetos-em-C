#include <stdlib.h>
#include <stdio.h>

main()
{
	int vet[] = {1,2,3,4,5};
	int *pont, i;
	
	
	for(pont = &vet[4], i =4; i >= 0; i-- , pont-- )
	{
		printf("\tvet\t%i\n", *pont);
	}
	
	printf("\n\n\n");
	for(pont = vet, i = 0; i < 5; i++, pont++)
	{
		if(*pont%2==0)
		{
		
			
			printf("\n\tpar\t%d", *pont );
		}
		else
			printf("\n\tImpar\t%d", *pont* 10);
	}
	
	
}
