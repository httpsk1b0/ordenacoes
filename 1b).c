#include <stdio.h>
#include <stdlib.h>
int main() {
  int i, t, v[] = {33, 71, 75, 10, 29, 55, 74, 73, 65, 19};

  printf("números a serem ordenados:\n");
//exibindo números do vetor
for (i = 0; i <= 9; i++)
{
    printf("%4d", v[i]);
}

void merge (int x, int inf, int sup, int mid, int t){
    int i, j, k, c[t];
    i = inf;
    k = inf;
    j = mid + 1;
    while (i <= mid && j <= sup) {
        if (c[i] < c[j]) {
            c[k] = c[i];
            k++;
            i++;
        }
        else  {
            c[k] = c[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = c[i];
        k++;
        i++;
    }
    while (j <= sup) {
        c[k] = c[j];
        k++;
        j++;
    }
    for (i = inf; i < k; i++)  {
        c[i] = c[i];
    }
}


void mergeSort(int x, int inf, int sup, int t){  
    int meio;
    if (inf < sup){
        meio=(inf+sup)/2;
        mergeSort(x, inf, meio, t);
        mergeSort(x, meio+1, sup, t);
        merge(x, inf, sup, meio, t);
    }
}

  //exibe valores ordenados
  printf("\nnúmeros ordenados:\n");  
  for (i = 0; i < 10; i++) {
     
    printf("%4d", v[i]);
  }
  return 0;
}

