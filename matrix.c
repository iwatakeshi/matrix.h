/*
  Author: Takeshi Iwana
  License: MIT
*/
#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>

/* Matrix helper functions */

void printm(int** a, unsigned int n, unsigned int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf(" %2d", a[i][j]);
    }
    printf("\n");
  }
}

void zerom(int** a, unsigned int n, unsigned int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      a[i][j] = 0;
    }
  }
}

void randm(int** a, int n, int m, int h) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      a[i][j] = rand() % h;
    }
  }
}

void copym(int** a, int** b, unsigned int n, unsigned int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      b[i][j] = a[i][j];
    }
  }
}

void* callocm(unsigned int n, unsigned int m) {
  int** a = (int**)calloc(n, sizeof(int));
  for (int i = 0; i < m; i++) {
    a[i] = malloc(n * sizeof(int));
    a[i] = 0;
  }
  return (void*)a;
}

void* mallocm(unsigned int n, unsigned int m) {
  int** a = (int**)malloc(m * sizeof(int*));
  for (int i = 0; i < m; i++) {
    a[i] = malloc(n * sizeof(int));
  }
  return (void*)a;
}

void freem(int** a, unsigned int n) {
  for (int i = 0; i < n; i++) {
    free(a[i]);
  }
  free(a);
}
