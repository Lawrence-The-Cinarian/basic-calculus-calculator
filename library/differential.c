#include "differential.h"

#define CONSTANT 1

int powerbycoefficient(Differentiate *replace)
{
  int answer = replace->power * replace->coefficient;
  return answer;
}



int powerbyconstant(Differentiate *replace)
{
  int answer = replace->power - CONSTANT;
  return answer;
}