#include "ListaD.hpp"
#include "UMa.hpp"
#include <iostream>
using namespace std;

void
UMa::contaPar (ListaD * l)
{
  int par, impar;
  par = 0;
  impar = 0;

  BlockD *aux;
  ItemD aju;
  aux = l->first->prox;
  aju = aux->data;
  while (aux != NULL)
    {
      ((aju.val % 2) == 0) ? par++ : impar++;
      aux = aux->prox;
      if (aux != NULL)
	aju = aux->data;
    }

  cout << "Numero de impares: " << impar << endl;
  cout << "Numero de pares: " << par << endl;
}

void
UMa::contaParRecursiva (BlockD * b, int par, int impar)
{
  BlockD *aux = b;
  ItemD aju;
  aju = aux->data;

  ((aju.val % 2) == 0) ? par++ : impar++;

  if (aux->prox != NULL)
    {
      contaParRecursiva (aux->prox, par, impar);
    }
  else
    cout << "Numero de impares: " << impar << endl << "Numero de pares: " <<
      par - 1 << endl;

}
