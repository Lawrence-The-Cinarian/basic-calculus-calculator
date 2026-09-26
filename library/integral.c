#include "integral.h"
#define CONSTANT 1

int addPowerAndConstant(Monomial1 *replace)
{
  int answer = replace->power + CONSTANT;
  return answer;
}


int overAddedPowerAndConstant(Monomial1 *replace)
{
  int answer = replace->power + CONSTANT;
  return answer;
}