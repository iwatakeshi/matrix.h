# matrix.h
Basic helper functions for an n x m matrix written in C.

## Header
```c
/* Prints an n x m matrix. */
void printm(int** a, unsigned int n, unsigned int m);

/* Fills an n x m matrix with zeros. */
void zerom(int** a, unsigned int n, unsigned int m);

/* Fills an n x m matrix with random numbers. */
void randm(int** a, unsigned int n, unsigned int m, unsigned int h);

/* Copies an n x m matrix A to B. */
void copym(int** a, int** b, unsigned int n, unsigned int m);

/* Allocates memory for an n x m matrix. */
void * mallocm(unsigned int n, unsigned int m);

/* Allocates memory for an n x m matrix and fills it with zeros. */
void * mallocm(unsigned int n, unsigned int m);

/* Frees the allocated memory for a matrix. */
void freem(int** a, unsigned int n);
```
## Usage

```c
#include "matrix.h"
#include <stdio.h>

int main() {
  int n = 5;
  // Allocate A and B
  int** A = mallocm(n, n);
  int** B = mallocm(n, n);
  
  // Fill A with zeros
  zerom(A, n, n);
  
  printf("A\n");
  
  A[1][1] = 2;
  
  // Print A
  printm(A, n, n);
  
  // Copy A to B
  copym(A, B, n, n);
  
  printf("B\n");
  
  B[0][0] = 1;
  
  // Print B
  printm(B, n, n);
  
  // Free A and B
  freem(A, n);
  freem(B, n);
  
  return 0;
}
```
