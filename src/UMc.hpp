#ifndef UMC_HPP
#define UMC_HPP
#include "Lista.hpp"
#include <utility>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

class UMc
{
public:

  Lista x;
  Lista y;

  void makeXY (int n);
  void juntaLista (int n);
};

#endif
