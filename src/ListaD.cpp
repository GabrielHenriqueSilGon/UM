#include "ListaD.hpp"

void Swap(BlockD *a, BlockD *b){
	ItemD aux;
	aux = a->data;
	a->data = b->data;
	b->data = aux;
	
}

void FLVazia(ListaD *l){
	l->first = (BlockD*) malloc (sizeof(BlockD));
	l->last  = l->first;
	l->first->prox = NULL;
}

void LInsert(ListaD *l, ItemD d){
	l->last->prox = (BlockD*) malloc (sizeof(BlockD));
	l->last = l->last->prox;
	l->last->data = d;
	l->last->prox = NULL;
}

void LRemove(ListaD *l, ItemD d){
	BlockD *aux, *tmp;

	if(l->first == l->last || l == NULL || l->first->prox == NULL){
		printf("LISTA VAZIA!\n");
		return;
	}
	
	aux = l->first;
	while(aux->prox != NULL){
		if (aux->prox->data.val == d.val){
			tmp = aux;
			aux = aux->prox;
			tmp->prox = aux->prox;
			if (aux == l->last)
				l->last = tmp;
			free(aux);
			aux->prox = NULL;
		}
		else
			aux = aux->prox;
	}
}


void LImprimeD(ListaD *l){
	BlockD *aux;

	aux = l->first->prox;
	while(aux != NULL){
		printf("%d\n", aux->data.val);
		aux = aux->prox;
	}

}
