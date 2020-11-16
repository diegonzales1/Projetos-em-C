#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>


struct aluno {
	int matricula;
	char nome[10];
	char curso[10];
};


main (){
	
	struct aluno pessoas;
	
	for(int i=0; i<5; i++)
	{
		printf("Digite o nome do aluno %i: ", i);
		gets(pessoas[i].nome );
		
		fflush(stdin);
		
		printf("Digite a matricula do aluno %i: ", i);
		gets( pessoas[i].matricula);
		
		fflush(stdin);
			
		printf("Digite a disciplica que o aluno %i cursa: ", i);
		gets( pessoas[i].curso);
		
		fflush(stdin);
	}
	
	for(i = 0; i<5; i++)
	{
		printf("O aluno %s da disciplica %s da matricula %i", pessoas[i].nome, pessoas[i].curso, pessoas[i].matricula);
	}
	
	
}
