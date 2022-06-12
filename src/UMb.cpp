#include <ctime>
#include "Lista.hpp"
#include "UMb.hpp"
#include <iostream>
using namespace std;

void
UMb::makerandlist ()
{
  int l;
  srand (time (NULL));
  
  FLVazia(&lista1);
  FLVazia(&lista2);
  
  for (l = 0; l < 3; l++)
    {
      Item aux;
      aux.val = rand () % 13;
      LInsert (&lista1, aux);
      aux.val = rand () % 13;
      LInsert (&lista2, aux);
    }
}

void
UMb::Jogo ()
{
  int r = (rand () % 13);

  cout << "O numero do jogo eh " << r << "\n";

  cout << "{{" << lista1.vet[0].val << "," << lista2.vet[0].
    val << "} , {" << lista1.vet[1].val << "," << lista2.vet[1].
    val << "} , {" << lista1.vet[2].val << "," << lista2.vet[2].val << "}}\n";

  for (int i = 0; i < 3; i++)
    {
      lista1.vet[i].val = lista1.vet[i].val - r;
      lista2.vet[i].val = lista2.vet[i].val - r;
    }

  int soma1 = lista1.vet[0].val + lista1.vet[1].val + lista1.vet[2].val;
  int soma2 = lista2.vet[0].val + lista2.vet[1].val + lista2.vet[2].val;

  if (soma2 > soma1)
    cout << "A lista 2 ganha com valor " << soma2 << ". \n";
  else
    cout << "A lista 1 ganha com valor " << soma1 << ". \n";
}
