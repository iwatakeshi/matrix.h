/*
  Author: Takeshi Iwana
  License: MIT
*/
#ifndef MATRIX_H
#define MATRIX_H
/* Matrix helper functions */
void printm(int** a, unsigned int n, unsigned int m);
void zerom(int** a, unsigned int n, unsigned int m);
void copym(int** a, int** b, unsigned int n, unsigned int m);
void * mallocm(unsigned int n, unsigned int m);
void freem(int** a, unsigned int n);

#endif
