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

void* callocm(unsigned int n, unsigned int m, unsigned int size) {
  void** a = calloc(n, sizeof * a * n);
  for (int i = 0; i < m; i++) {
    a[i] = calloc(m, size);
  }
  return (void*)a;
}

void* mallocm(unsigned int n, unsigned int m, unsigned int size) {
  void** a = malloc(sizeof * a * n);
  for (int i = 0; i < m; i++) {
    a[i] = malloc(m * size);
  }
  return (void*)a;
}

void freem(int** a, unsigned int n) {
  for (int i = 0; i < n; i++) {
    free(a[i]);
  }
  free(a);
}
