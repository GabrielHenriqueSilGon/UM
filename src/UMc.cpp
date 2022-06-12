#include <ctime>
#include "Lista.hpp"
#include "UMc.hpp"
#include <iostream>
using namespace std;

void
UMc::makeXY (int n)
{
  int l;
  srand (time (NULL));
  
  FLVazia(&x);
  FLVazia(&y);
  
  for (l = 0; l < n; l++)
    {
     Item aux;
      aux.val = rand () % 10;
      LInsert (&x, aux);
      aux.val = rand () % 10;
      LInsert (&y, aux);
    }
    
    cout << "As listas formadas são:\nX: ";
    LImprime(&x);
    cout << "Y: ";
    LImprime(&y);
}

void
UMc::juntaLista (int n)
{
    int j = n - 1;
    cout << "As listas juntas formam:\nZ: [";
    
    for (int i = 0; i < n; i++) {
       cout << "(" << x.vet[i].val << "," << y.vet[j-i].val << ") , ";
    }
    
    cout << "]. \n";
    
}

