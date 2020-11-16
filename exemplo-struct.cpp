#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa
{
	char nome[30];
	int idade;
	char sexo;
		
}vet[3];

void F_verificaNome();

main()
{
	int i;
	
	for( i= 0; i<3; i++)
	{
		printf("Digite o nome: ");
		gets(vet[i].nome);
		
		fflush stdin; //limpa o buffer
		
		printf("Informe a idade: ");
		scanf("%d", &vet[i].idade);
		
		fflush stdin; //limpa o buffer
		
		printf("Informe o sexo: ");
		scanf("%c", &vet[i].idade);
		
		printf("\n\n");
		
		fflush stdin; //limpa o buffe
	}
	
	
	F_verificaNome();
}

void F_verificaNome()
{
	char nome1[30];
	int i;
	
		printf("Digite o nome qualquer:  ");
		gets(nome1);
		
		for(i=0; i < 3; i++)
		{
			if(strcmp(nome1, vet[i].nome) == 0 )
				printf("ESSE NOME EXISTE!\n\n");
				
			else
				printf("ESSE NOME NAO EXISTE!\n\n");
			
		}
		
}






