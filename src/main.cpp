#include <iostream>
#include "ListaD.hpp"
#include "Lista.hpp"
#include "UMa.hpp"
#include "UMb.hpp"
#include "UMc.hpp"
#include "UMd.hpp"

using namespace std;

int
main ()
{
  char c;
  c = ' ';
  ListaD l;
  ItemD aux;
  UMa ua;
  UMb ub;
  UMc uc;
  UMd ud;
  BlockD *prim;

  while (c != 's')
    {
      cout << "\nQual questao voce quer testar? (digite s para sair)" << endl;
      cin >> c;
      cout << "\n";
      switch (c)
	{

	case 'a':
	  {
	    FLVazia (&l);
	    aux.val = 11;
	    LInsert (&l, aux);
	    aux.val = 22;
	    LInsert (&l, aux);
	    aux.val = 33;
	    LInsert (&l, aux);
	    ua.contaPar (&l);

	    cout << "\nRecursiva:\n";
	    prim = l.first;
	    ua.contaParRecursiva (prim, 0, 0);

	    break;
	  }

	case 'b':
	  {
	    ub.makerandlist ();
	    ub.Jogo ();
	    break;
	  }
    
	case 'c':
	  {
	    int n;
	    cout << "De o tamanho das listas: \n";
	    cin >> n;
	    uc.makeXY (n);
	    uc.juntaLista (n);
	    break;
	  }
	  
	case 'd':
	  {
	    int n;
	    cout << "De o tamanho das listas: \n";
	    cin >> n;
	    ud.makeXY (n);
	    ud.euclidiana (n);
	    break;
	  } 
	  
	}
    }
  return 0;
}
