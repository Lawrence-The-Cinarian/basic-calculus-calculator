#include "../library/calculus.h"
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  do
  {
    Differentiate problem;
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
        differentiation(&problem);
        for(int i = 0; i < problem.count; i++)
        {
          int derivCoeff = powerbycoefficient(&problem.monomials[i]);
          int derivPower = powerbyconstant(&problem.monomials[i]);
          printf("Derivative: %dx^%d\n", derivCoeff, derivPower);
        }
        break;

      case 2:
        puts("");
        integration();
        break;

      case 3:
        return 0;

      default:
        puts("");
        puts("invalid option");
    }

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