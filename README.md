# matrix.h
Basic helper functions for an n x m matrix written in C.

```c
/* Prints an n x m matrix. */
void printm(int** matrix, unsigned int n, unsigned int m);
/* Fills an n x m matrix with zeros. */
void zerom(int** matrix, unsigned int n, unsigned int m);
/* Copys an n x m matrix A to B.*/
void copym(int** matrix, int** matrix2, unsigned int n, unsigned int m);
/* Allocates a memory for an n x m matrix. */
void * mallocm(unsigned int n, unsigned int m);
/* Frees the allocated memory for a matrix.*/
void freem(int** matrix, unsigned int n);
```
