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
    int derivCoeff, derivPower, defaulter, integralPower, integralCoeff;
    char name = 'C';


    puts("");
    printsmenu();
    puts("");
    printf("Enter from the option above, the number: ");
    scanf("%d", &option);
    switch(option)
    {
      case 1:
        puts("");
        FILE *differential_file;
        differentiation(&problem);
        for(int i = 0; i < problem.count; i++)
        {
          derivCoeff = powerbycoefficient(&problem.monomials[i]);
          derivPower = powerbyconstant(&problem.monomials[i]);
          printf("New Derivative: %dx^%d\n", derivCoeff, derivPower);
          if(derivPower == 0)
          {
              printf("New Derivative: %d\n", derivCoeff);
              differential_file = fopen("differential.txt", "a");
              if(differential_file == NULL)
              {
                puts("Error opening file");
                return 1;
               }
               fprintf(differential_file, "New Derivative: %dx^%d\n\n", derivCoeff, derivPower);
               fprintf(differential_file, "____________________________________________________________________________________________\n");
          	   continue;
          }
      }
      fclose(differential_file);
      puts("Saved to differential.txt");
      break;

      case 2:
        puts("");
        FILE *integral_file;
        integration(&problem1);
        for(int i = 0; i < problem1.count; i++)
        {
          defaulter = problem1.monomials[i].coefficient;
          integralCoeff = addPowerAndConstant(&problem1.monomials[i]);
          integralPower = overAddedPowerAndConstant(&problem1.monomials[i]);
          printf("New Integral: (%dx^%d)/%d\n", defaulter, integralPower, integralCoeff);
            if(integralPower == 0 && integralCoeff == 0)
            {
               printf("Constant: C\n");
               integral_file = fopen("integral.txt", "a");
               if(integral_file == NULL)
               {
                  puts("Error opening file");
                  return 1;
               }
           fprintf(integral_file, "Constant: C\n");
           fprintf(integral_file, "____________________________________________________________________________________________\n");
           fclose(integral_file);
           continue;
             }
        }
        puts("Saved to integral.txt");
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
