#include "../library/calculus.h"
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  do
  {
    Differentiate problem;
    Integrate problem1;
    problem.count = 0;
    int option = 0;
    char symbol = '\0';

    puts("");
    printsmenu();
    puts("");
    printf("Enter from the option above, the number: ");
    scanf("%d", &option);

    switch(option)
    {
      case 1:
        puts("");
        differentiation(&problem);
        for(int i = 0; i < problem.count; i++)
        {
          int derivCoeff = powerbycoefficient(&problem.monomials[i]);
          int derivPower = powerbyconstant(&problem.monomials[i]);
          printf("New Derivative: %dx^%d\n", derivCoeff, derivPower);
          if(derivPower == 0)
          {
            printf("Please the second to the last and use this\nNew Derivative: %d\n", derivCoeff);
          }
        }
        break;

      case 2:
        puts("");
        integration(&problem1);
        for(int i = 0; i < problem1.count; i++)
        {
          int defaulter = problem1.monomials[i].coefficient;
          int integralCoeff = addPowerAndConstant(&problem1.monomials[i]);
          int integralPower = overAddedPowerAndConstant(&problem1.monomials[i]);
          printf("New Integral: (%dx^%d)/%d\n", defaulter, integralPower, integralCoeff);
          if(integralPower == 1)
          {
            printf("New Integral: C\n");
            break;
          }
        }
        break;

      case 3:
      return 0;

      default:
        puts("");
        puts("invalid option");
    }
    
    puts("");
    printf("Would you like to continue? Y[es] or N[o]: ");
    scanf(" %c", &symbol);
    if(!(symbol == 'Y' || symbol == 'y'))
    {
      break;
    }
  }
  while(true);
  return 0;
}