#include <stdio.h>
#define N 8

void MergeSort_ver2(int x[], int min, int max, int tmp[]);

int main(void)
{
  int data[N] = {3,2,8,5,7,1,6,4};
  int tmp[N];
  int i;

  printf("\nBefore Sort\n");
  for (i=0; i<N; i++) printf("%d\t", data[i]);
  printf("\n");

  MergeSort_ver2(data, 0, N-1, tmp);

  printf("\nAfter Sort\n");
  for (i=0; i<N; i++) printf("%d\t", data[i]);
  printf("\n");

  return 0;
}

void MergeSort_ver2(int x[], int min, int max, int tmp[])
{
	int mid, i, j, k;
	
	if (min >= max) return;
	
	mid = (min + max) / 2;
	MergeSort_ver2(x, min, mid, tmp);
	MergeSort_ver2(x, mid+1, max, tmp);

  for (i=min, k=0; i<=mid; i++, k++) tmp[k] = x[i];
	
	j = mid + 1; k = 0;
	for (i=min; i<=max; i++) {
		if (j<=max && k<=mid-min) {
			if (tmp[k] <= x[j]) {
				x[i] = tmp[k]; k++;
			} else {
				x[i] = x[j]; j++;
			}
		} else if (j<=max) {
			x[i] = x[j]; j++;
		} else {
			x[i] = tmp[k]; k++;
		}
	}
	return;
}