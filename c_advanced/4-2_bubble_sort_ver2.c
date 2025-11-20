#include <stdio.h>
#define N 8 // データ数

void BubbleSort_ver2(int x[], int n);

int main(void)
{
  int data[N] = {3,2,8,5,7,1,6,4};
  int i;

  printf("\nBefore sort\n");
  for (i=0; i<N; i++) printf("%d\t", data[i]);
  printf("\n");

  BubbleSort_ver2(data, N);

  printf("\n After sort\n");
  for (i=0; i<N; i++) printf("%d\t", data[i]);
  printf("\n");

  return 0;
}

void BubbleSort_ver2(int x[], int n)
{
  int i, j, tmp, flg = 1;

  for (j=n-1; j>0; j--) {
    flg = 0;
    for (i=0; i<j; i++) {
      if (x[i] > x[i+1]){
        tmp = x[i];
        x[i] = x[i+1];
        x[i+1] = tmp;
        flg = 1;
      }
    }
  }
  return;
}