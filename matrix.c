/*
  Author: Takeshi Iwana
  License: MIT
*/
#include "matrix.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/* Matrix helper functions */

void printm(int** matrix, unsigned int n, unsigned int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf(" %2d", matrix[i][j]);
    }
    printf("\n");
  }
}

void zerom(int** matrix, unsigned int n, unsigned int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      matrix[i][j] = 0;
    }
  }
}

void copym(int** matrix, int** matrix2, unsigned int n, unsigned int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      matrix2[i][j] = matrix[i][j];
    }
  }
}

void * mallocm(unsigned int n, unsigned int m) {
  int ** matrix = (int**)malloc(m * sizeof(int*));
  int i = 0;
  for (i = 0; i < m; i++) {
    matrix[i] = malloc(n * sizeof(int));
  }
  return (void *)matrix;
}

void freem(int** matrix, unsigned int n) {
  for (int i = 0; i < n; i++) {
    free(matrix[i]);
  }
  free(matrix);
}