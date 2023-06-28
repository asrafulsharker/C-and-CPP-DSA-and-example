#include <stdio.h>

void mSort(int A[], int B, int r)
{
  if (B < r)
  {

    int q = ((B + r) / 2);
    mSort(A, B, q);
    mSort(A, q + 1, r);
    merge(A, B, q, r);
  }
}
void merge(int A[], int B, int q, int r) {

  int n1 = q - B + 1;
  int n2 = r - q;

  int L[n1], R[n2];

  for (int i = 0; i < n1; i++)
    L[i] = A[B + i];
  for (int j = 0; j < n2; j++)
    R[j] = A[q + j+ 1];

  int i, j, k;
  i = 0;
  j = 0;
  k = B;

  while (i < n1 && j < n2) {
    if (L[i] <= R[j])
    {
      A[k] = L[i];
      i = i+1;
    }
    else
    {
      A[k] = R[j];
      j = j+1;
    }
    k++;
  }

  while (i < n1) {
    A[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    A[k] = R[j];
    j++;
    k++;
  }
}



void display(int A[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", A[i]);
  printf("\n");
}

int main() {
  int A[] = {10, 5, 20, 7, 18};
  int size = sizeof(A) / sizeof(A[0]);

  printf("Unsorted array list:\n");
  display(A , size);

  mSort(A , 0, size - 1);

  printf("Sorted array list \n");
  display(A , size);
}
