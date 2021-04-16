//Alteração dos dados de um contato
#include "Prototipos.h"


void alteracao(struct agenda contato[], int contAgenda){	
	int cont, escolha, opcao;
	printf("Qual contato deseja alterar?\n");
	printf("\n");
	for(cont = 0; cont < contAgenda; cont++)
	{
		printf("%d - Nome:     %s\n", cont+1, contato[cont].nome);
		printf("     Codigo:   %d\n", contato[cont].codigo);
		printf("     Telefone: %s\n", contato[cont].telefone);
		printf("\n");
	}
	printf("Opção: ");
	scanf("%d", &escolha);
	escolha--;
	if (escolha < contAgenda){
	printf("\n");
	printf("Deseja alterar o nome?\n");
	printf("1 - Sim        2 - Não\n");
	printf("Opção: ");
	scanf("%d",&opcao);
	printf("\n");
	switch(opcao){
    case 1:
    printf("Insira o novo nome\n");
    fflush(stdin);
	gets(contato[escolha].nome);
    case 2:	   
   	break;
	}
	printf("\n");
	printf("Deseja alterar o código?\n");
	printf("1 - Sim        2 - Não\n");
	printf("Opção: ");
	scanf("%d",&opcao);
	printf("\n");
	switch(opcao){
    case 1:
    printf("Insira o novo código\n");
    scanf("%d", &contato[escolha].codigo);
    case 2:	   
   	break;
	}
	printf("\n");
	printf("Deseja alterar o telefone?\n");
	printf("1 - Sim        2 - Não\n");
	printf("Opção: ");
	scanf("%d",&opcao);
	printf("\n");
	switch(opcao){
    case 1:
    printf("Insira o novo telefone\n");
    printf("Ex:(45)99876-5432 deve ser inserido 45998765432\n");
    fflush(stdin);
	gets(contato[escolha].telefone);
    case 2:	   
   	break;
	}
	}
	else{
	printf("Opção inválida");
	}
}
