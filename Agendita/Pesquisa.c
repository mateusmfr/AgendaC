//Pesquisa por c�digo
#include "Prototipos.h"


void pesquisa(struct agenda contato[], int contAgenda){
	int cont, codigo, achou = 0;
	printf("Insira o c�digo a ser pesquisado\n");
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
	printf("C�digo n�o encontrado\n");
	}
}
