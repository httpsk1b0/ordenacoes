#include <stdio.h>
#include <stdlib.h>

void quicksort(int *a, int l, int r);

int main() {
  int i, v[] = {33, 71, 75, 10, 29, 55, 74, 73, 65, 19};

  printf("números a serem ordenados:\n");

//exibindo números do vetor
for (i = 0; i <= 9; i++)
{
    printf("%4d", v[i]);
}

  // Ordena os valores
  quicksort(v, 0, 9);

  //exibe valores ordenados
  printf("\nnúmeros ordenados:\n");
  for (i = 0; i < 10; i++) {
    printf("%4d", v[i]);
  }
  return 0;
}
//quicksort
void quicksort(int *a, int l, int r) {
  int i, j, x, y;

  i = l;
  j = r;
  x = a[(l + r) / 2];
  // enquanto i que eh 0 for menor ou igual a j q eh 9
  while (i <= j) {
    while (a[i] < x && i < r) {
      i++;
    }
    while (a[j] > x && j > l) {
      j--;
    }
    if (i <= j) {
      y = a[i];
      a[i] = a[j];
      a[j] = y;
      i++;
      j--;
    }
  }

  if (j > l) {
    quicksort(a, l, j);
  }
  if (i < r) {
    quicksort(a, i, r);
  }
}
