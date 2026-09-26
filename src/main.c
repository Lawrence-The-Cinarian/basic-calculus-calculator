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
          if(derivPower == 0)
          {
            printf("Please the second to the last and use this\nNew Derivative: %d\n", derivCoeff);
            break;
          }
          printf("New Derivative: %dx^%d\n", derivCoeff, derivPower);
        
            FILE *open_file;
            open_file = fopen("calculus.txt", "a");
            if(open_file == NULL)
            {
            puts("Error opening file");
            return 1;
            }
            for(int i = 0; i < problem.count; i++)
            {
              fprintf(open_file, "New Derivative: %dx^%d\n\n", derivCoeff, derivPower);
             }
             
             fclose(open_file);
             puts("");
             puts("Saved to calculcus.txt");
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
          
          if(integralPower == 1)
          {
            printf("New Integral: C\n");
            break;
          }
          
          printf("New Integral: (%dx^%d)/%d\n\n", defaulter, integralPower, integralCoeff);
          
          FILE *open_file;
            open_file = fopen("calculus.txt", "a");
            if(open_file == NULL)
            {
            puts("Error opening file");
            return 1;
            }
            for(int i = 0; i < problem.count; i++)
            {
              fprintf(open_file, "New Derivative: %dx^%d\n\n", integralCoeff, integralPower);
             }
             
             fclose(open_file);
             puts("");
             puts("Saved to calculcus.txt");
        
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