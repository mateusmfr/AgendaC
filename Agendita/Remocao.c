//Remoção de um contato
#include "Prototipos.h"


void remocao(struct agenda contato[], int contAgenda){
	int cont, escolha;
	printf("Qual contato deseja remover?\n");
	for(cont = 0; cont < contAgenda; cont++)
	{
		printf("%d - Nome:     %s\n", cont+1, contato[cont].nome);
		printf("     Codigo:   %d\n", contato[cont].codigo);
		printf("     Telefone: %s\n", contato[cont].telefone);
	}
	scanf("%d", &escolha);
	escolha--;	
	for(cont = escolha; cont < contAgenda; cont++)
	{
		contato[cont] = contato[cont+1];
	}
}
