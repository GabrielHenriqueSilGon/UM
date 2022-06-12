#include <ctime>
#include "Lista.hpp"
#include "UMd.hpp"
#include <iostream>
#include <utility>
#include <cstdlib>
#include <iterator>
#include <bits/stdc++.h>
using namespace std;

void
UMd::makeXY (int n)
{
  int l;
  srand (time (NULL));

  FLVazia (&x);
  FLVazia (&y);

  for (l = 0; l < n; l++)
    {
      Item aux;
      aux.val = rand () % 10;
      LInsert (&x, aux);
      aux.val = rand () % 10;
      LInsert (&y, aux);
    }
/*
  cout << "As listas formadas sao:\nX: ";
  LImprime (&x);
  cout << "Y: ";
  LImprime (&y); */
}

void
UMd::euclidiana (int n)
{


  double vetz[n];
  double vetz1[n];

  for (int i = 0; i < n; i++)
    {
      vetz[i] = ((double) sqrt (((x.vet[i].val - n) * (x.vet[i].val - n)) +
				((y.vet[i].val - n) * (y.vet[i].val - n))));
      vetz1[i] = vetz[i];
      cout << vetz1[i] << endl;

    }



  cout << "\n.\n";

  int h = 0;

  do
    {
      h = 3 * h + 1;
    }
  while (h < n);

  do
    {
      h = h / 3;

      for (int i = h + 1; i < n; i++)
	{
	  double x = vetz[i];
	  int j = i;

	  while (vetz[j - h] > x)
	    {

	      vetz[j] = vetz[j - h];
	      j = j - h;

	      if (j <= h)
		{
		  break;
		}

	    }
	  vetz[j] = x;
	}
    }
  while (h > 0);

  for (int t = 0; t < n; t++)
    {
      cout << vetz[t] << endl;
    }

  double sub = fabs (vetz[0] - vetz[1]);
  int inter1 = 0;
  int inter2 = 1;

  for (int at = 1; at < n; at++)
    {
      if (fabs (vetz[at] - vetz[at + 1]) < sub)
	{
	  inter1 = at;
	  inter2 = (at + 1);
	  sub = fabs (vetz[at] - vetz[at + 1]);
	}
    }

  double val1 = vetz[inter1];
  int ou1 = inter1;
  double val2 = vetz[inter2];
  int ou2 = inter2;

  for (int as = 0; as < n; as++)
    {
      if (vetz1[as] = val1)
	{
	  ou1 = as;
	}
      else if (vetz1[as] = val2)
	{
	  ou2 = as;
	}
    }

  cout << "Os pares mais proximos da lista sao " << x.
    vet[ou1].val << "," << y.vet[ou1].
    val << " com a euclidiana " << vetz1[ou1] << " e " << x.vet[ou2].
    val << "," << y.vet[ou2].
    val << " com a euclidiana " << vetz1[ou2] << endl;
}
