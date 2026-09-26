#include "differential.h"
#define CONSTANT 1

int powerbycoefficient(Monomial *replace)
{
  int answer = replace->power * replace->coefficient;
  return answer;
}


int powerbyconstant(Monomial *replace)
{
  int answer = replace->power - CONSTANT;
  return answer;
}