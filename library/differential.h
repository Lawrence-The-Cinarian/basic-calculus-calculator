#ifndef DIFFERENTIAL_H
#define DIFFERENTIAL_H

typedef struct
{
  int monomials;
  int power;
  int coefficient;
} Differentiate;

int powerbycoefficient(Differentiate *replace);
int powerbyconstant(Differentiate *replace);

#endif