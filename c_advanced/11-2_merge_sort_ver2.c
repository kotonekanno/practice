#include <string.h>
#include <stdio.h>
#define N 8

void MergeSort(int x[], int min, int max, int tmp[]);

int main(void)
{
  int data[N] = {3,2,8,5,7,1,6,4};
  int tmp[N];
  int i;

  printf("\nBefore Sort\n");
  for (i=0; i<N; i++) printf("%d\t", data[i]);
  printf("\n");

  MergeSort(data, 0, N-1, tmp);

  printf("\nAfter Sort\n");
  for (i=0; i<N; i++) printf("%d\t", data[i]);
  printf("\n");

  return 0;
}

void MergeSort(int x[], int min, int max, int tmp[])
{
	int mid, i, j, k;
	
	if (min >= max) return;
	
	mid = (min + max) / 2;
	MergeSort(x, min, mid, tmp);
	MergeSort(x, mid+1, max, tmp);
	
	i = min; j = mid + 1;
	for (k=min; k<=max; k++) {
		if (i<=mid && j<=max) {
			if (x[i] <= x[j]) {
				tmp[k] = x[i]; i++;
			} else {
				tmp[k] = x[j]; j++;
			}
		} else if (i<=mid) {
			tmp[k] = x[i]; i++;
		} else {
			tmp[k] = x[j]; j++;
		}
	}
	memcpy(x+min, tmp+min, (max-min+1)*sizeof(int));
	return;
}