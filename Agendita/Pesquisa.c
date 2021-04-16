//Pesquisa por código
#include "Prototipos.h"


void pesquisa(struct agenda contato[], int contAgenda){
	int cont, codigo, achou = 0;
	printf("Insira o código a ser pesquisado\n");
	scanf("%d", &codigo);
	printf("\n");
	for(cont = 0; cont < contAgenda; cont++)
	{
		if(codigo == contato[cont].codigo)
		{
		printf("%d - Nome:     %s\n", cont+1, contato[cont].nome);
		printf("    Telefone: %s\n", contato[cont].telefone);
		achou = 1;
		}
	}
	if (achou != 1)
	{
	printf("Código não encontrado\n");
	}
}
