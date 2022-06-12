#ifndef UMD_HPP
#define UMD_HPP
#include "Lista.hpp"
#include <utility>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

class UMd
{
public:

  Lista x;
  Lista y;

  void makeXY (int n);
  void euclidiana (int n);
};

#endif

