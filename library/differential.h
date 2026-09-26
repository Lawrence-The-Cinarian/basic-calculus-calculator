#ifndef DIFFERENTIAL_H
#define DIFFERENTIAL_H

typedef struct
{
  int monomials;
  int power;
  int coefficient;
} Differentiate[100];

int powerbycoefficient(Differentiate *replace);
int powerbyconstant(Differentiate *replace);

#endif