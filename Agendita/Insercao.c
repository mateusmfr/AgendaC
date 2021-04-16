//Inserção dos dados de um contato
#include "Prototipos.h" 


void insercao(struct agenda contato[], int contAgenda){
	printf("Insira o nome do contato\n");
	fflush(stdin);
	gets(contato[contAgenda].nome);
	printf("\n");
	printf("Insira o codigo do contato:\n");
	scanf("%d", &contato[contAgenda].codigo);
	printf("\n");
	printf("Insira o telefone do contato\n");
	printf("Ex:(45)99876-5432 deve ser inserido 45998765432\n");
	fflush(stdin);
	gets(contato[contAgenda].telefone);
}
