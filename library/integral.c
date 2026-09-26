#include "integral.h"
#define CONSTANT 1

int addPowerAndConstant(Monomial *replace)
{
  int answer = replace->power + CONSTANT;
  return answer;
}


int overAddedPowerAndConstant(Monomial *replace)
{
  int answer = replace->power + CONSTANT;
  return answer;
}