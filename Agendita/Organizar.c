//Organizacao dos contatos por tamanho do nome em ordem crescente
#include "Prototipos.h"


void organizar(struct agenda contato[], struct agenda aux[], int contAgenda){
	int cont, cont2;
	for(cont = 0; cont < contAgenda; cont++)
	{
		for(cont2 = 0; cont2 < contAgenda; cont2++)
		{
			if(strlen(contato[cont].nome)<strlen(contato[cont2].nome))
			{
				aux[cont] = contato[cont2];
				contato[cont2] = contato[cont];
				contato[cont] = aux[cont];
			}
		}
	}
}
