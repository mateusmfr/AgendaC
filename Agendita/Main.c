#include "Prototipos.h"


void main(){
	setlocale(LC_ALL, "Portuguese");
	int opcao, contAgenda = 0;
	struct agenda contato[TAM];
	struct agenda aux[TAM];
	while(opcao!=5){
	organizar(contato, aux, contAgenda);
	printf(" ____________________________\n");
	printf("|            MENU            |\n");
	printf("|____________________________|\n");
	printf("|      1 - Inser��o          |\n");
	printf("|                            |\n");
	printf("|      2 - Remo��o           |\n");
	printf("|                            |\n");
	printf("|      3 - Pesquisa          |\n");
	printf("|                            |\n");
	printf("|      4 - Altera��o         |\n");
	printf("|                            |\n");
	printf("|      5 - Sair              |\n");
	printf("|____________________________|\n");
	printf("\n\n");
	printf("Op��o: ");
	scanf("%d",&opcao);
	system("cls");
    switch(opcao){
    case 1:
    if (contAgenda < TAM){
		insercao(contato, contAgenda);
   		contAgenda++;
   		getch();
   		system("cls");
   		break;
	}
	else{
		printf("A lista de contatos est� cheia\n");
		printf("Caso queira inserir alguem ser� necess�rio remover um contato antes\n");
		getch();
   		system("cls");
	}
    case 2:
		remocao(contato, contAgenda);
		getch();
   		system("cls");	   
   	break;
    case 3:
   		pesquisa(contato, contAgenda);
   		getch();
   		system("cls");
   	break;
    case 4:
		alteracao(contato, contAgenda);
		getch();
   		system("cls");
   	break;
    case 5:
   	break;   		
	}
	}
}
