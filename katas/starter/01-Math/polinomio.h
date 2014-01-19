/*
 * Polinomio: a * x ^ 2 + b * x + c
 */

#ifndef __POLINOMIO_H__
  #define __POLINOMIO_H__

  // Coeficientes (variables globales)
  extern float a, b, c;

  // Calcula raices
  float raiz1 ();
  float raiz2 ();
  void raices(float *pr1, float *pr2);

#endif