/*
  Author: Takeshi Iwana
  License: MIT
*/
#ifndef MATRIX_H
#define MATRIX_H

/* Matrix helper functions */
void printm(int** a, unsigned int n, unsigned int m);
void zerom(int** a, unsigned int n, unsigned int m);
void randm(int** a, int n, int m, int h);
void copym(int** a, int** b, unsigned int n, unsigned int m);
void* callocm(unsigned int n, unsigned int m, unsigned int size);
void* mallocm(unsigned int n, unsigned int m, unsigned int size);
void freem(int** a, unsigned int n);

#endif
