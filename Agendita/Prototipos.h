//Prototipos do projeto
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 2

struct agenda{
	char nome[40];
	int codigo;
	char telefone[11];
};
struct agenda contato[TAM];
struct agenda aux[TAM];

void insercao();

void organizar();

void remocao();

void pesquisa();

void alteracao();
