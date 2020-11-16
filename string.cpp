#include <stdio.h>
#include <stdlib.h>
#include <string.h>




main(){
	
	int idade;
	char nome[20];
	
	printf("Digite a sua idade: ");
	scanf("%i", &idade);
	
	fflush(stdin); //limpa o buffer

	printf("Digite seu nome:");
	gets(nome);
	
	printf("%s", nome);
	

}
