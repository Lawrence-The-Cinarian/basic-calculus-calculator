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


int powerbycoefficient(Differentiate *replace);
int powerbyconstant(Differentiate *replace);

#endif