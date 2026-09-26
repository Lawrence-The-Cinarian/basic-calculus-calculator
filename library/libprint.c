#include "calculus.h"
#include <stdio.h>

void printsmenu()
{
  puts("Calculus' Calculator");
  puts("");
  puts("(1) Differentiate");
  puts("(2) Integrate");
  puts("(3) Exit");
}



int differentiation()
{
  Monomial *replace;
  Differentiate *replace
  
  printf("Enter the number of monomials you want to calculate: ");
  scanf("%d", &replace->monomials);
 for(int i = 0; i < replace->count; i++)
{
  printf("Enter power for monomial %d: ", i+1);
  scanf("%d", &replace->monomials[i].power);
  
  printf("Enter coefficient for monomial %d: ", i+1);
  scanf("%d", &replace->monomials[i].coefficient);
  
  replace->count++;
}

  return 0;
}



int integration()
{
  return 0;
}