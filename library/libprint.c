#include "libprint.h"
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
  int monomials = 0
  int power = 0;
  int coefficient = 0;
  int i = 0;
  
  
  printf("Enter the number of monomials you want to calculate: ");
  scanf("%d", &monomials);
  while(i < monomials)
  {
    printf("Enter the power for variable x for %d: ", power[i]);
    scanf("%d", &power[i]);
    printf("Enter coefficient for variable x for %d", coefficient[i]);
    scanf("%d", &coefficient[i]);
  }
  return 0;
}



int integration()
{
  return 0;
}