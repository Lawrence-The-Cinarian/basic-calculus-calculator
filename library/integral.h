#ifndef INTEGRAL_H
#define INTEGRAL_H

typedef struct {
  int power;
  int coefficient;
} Monomial;

typedef struct {
  Monomial monomials[100];
  int count;
} Integrate;

int addPowerAndConstant(Monomial *replace);
int overAddedPowerAndConstant(Monomial *replace);

#endif