#ifndef LISTA_HPP
#define LISTA_HPP

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct ItemD ItemD;
typedef struct BlockD BlockD;
typedef struct ListaD ListaD;

struct ItemD{
	int val;
};

struct BlockD{
	ItemD data;
	BlockD *prox;
};

struct ListaD{
	BlockD *first;
	BlockD *last;
};


void FLVazia(ListaD *l);
void LInsert(ListaD *l, ItemD d);
void LRemove(ListaD *l, ItemD d);
void Swap(BlockD *a, BlockD *b);
void LImprime(ListaD *l);

#endif
