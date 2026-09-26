#ifndef INTEGRAL_H
#define INTEGRAL_H

typedef struct {
  int power;
  int coefficient;
} Monomial1;

typedef struct {
  Monomial1 monomials[100];
  int count;
} Integrate;

int addPowerAndConstant(Monomial1 *replace);
int overAddedPowerAndConstant(Monomial1 *replace);

#endif