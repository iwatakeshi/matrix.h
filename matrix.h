/*
  Author: Takeshi Iwana
  License: MIT
*/
#ifndef MATRIX_H
#define MATRIX_H
/* Matrix helper functions */
void printm(int** matrix, unsigned int n, unsigned int m);
void zerom(int** matrix, unsigned int n, unsigned int m);
void copym(int** matrix, int** matrix2, unsigned int n, unsigned int m);
void * mallocm(unsigned int n, unsigned int m);
void freem(int** matrix, unsigned int n);

#endif
