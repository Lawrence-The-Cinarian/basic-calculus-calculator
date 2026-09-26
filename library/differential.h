#ifndef DIFFERENTIAL_H
#define DIFFERENTIAL_H

typedef struct {
  int power;
  int coefficient;
} Monomial;

typedef struct {
  Monomial monomials[100];
  int count;
} Differentiate;


int powerbycoefficient(Monomial *replace);
int powerbyconstant(Monomial *replace);

#endif