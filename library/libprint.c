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

int differentiation(Differentiate *problem)
{
  printf("Enter the number of monomials you want to calculate: ");
  scanf("%d", &problem->count);

  for(int i = 0; i < problem->count; i++)
  {
    printf("Enter power for monomial %d: ", i+1);
    scanf("%d", &problem->monomials[i].power);

    printf("Enter coefficient for monomial %d: ", i+1);
    scanf("%d", &problem->monomials[i].coefficient);
  }

  return 0;
}

int integration(Integrate *problem)
{
  printf("Enter the number of monomials you want to calculate: ");
  scanf("%d", &problem->count);

  for(int i = 0; i < problem->count; i++)
  {
    printf("Enter power for monomial %d: ", i+1);
    scanf("%d", &problem->monomials[i].power);

    printf("Enter coefficient for monomial %d: ", i+1);
    scanf("%d", &problem->monomials[i].coefficient);
  }
  return 0;
}