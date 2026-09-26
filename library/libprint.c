#include "calculus.h"
#include <stdio.h>

void printsmenu()
{
  puts("Calculus' Calculator");
  puts("");
  puts("(1) Differentiate");
  puts("(2) Integrate");
  puts("(3) Exit")
}



int differentiation()
{
  Differentiate *replace;
  replace->monomials = 0
  replace->power = 0;
  replace->coefficient = 0;
  int i = 0;
  
  
  printf("Enter the number of monomials you want to calculate: ");
  scanf("%d", &replace->monomials);
  while(i < replace->monomials)
  {
    printf("Enter the power for variable x for %d: ", replace[i]->power);
    scanf("%d", &replace[i]->power);
    printf("Enter coefficient for variable x for %d", replace[i]->coefficient);
    scanf("%d", &replace[i]->coefficient);
  }
  return 0;
}



int integration()
{
  return 0;
}