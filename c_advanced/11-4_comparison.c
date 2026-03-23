#include <stdio.h>
#include <stdlib.h>
#define N 100

void GenerateRandomData(int seed, int range, int data[], int num);
void InsertionSort(int x[], int n);
void MergeSort(int x[], int min, int max, int tmp[]);

int COMP;
int MOVE;

int main(void)
{
  int data1[N], data2[N];
  int tmp[N];
  int i, seed;

  printf("乱数のタネを入力："); scanf("%d", &seed);
  GenerateRandomData(seed, N, data1, N);
  for (i=0; i<N; i++) data2[i] = data1[i];

  printf("\n=Insertion Sort=\n");
  COMP = MOVE = 0;
  InsertionSort(data1, N);
  printf("Comparison: %d times  Move: %d times\n", COMP, MOVE);

  printf("\n=Merge Sort=\n");
  COMP = MOVE = 0;
  MergeSort(data2, 0, N-1, tmp);
  printf("Comparison: %d times, Move: %d times\n", COMP, MOVE);

  return 0;
}

void GenerateRandomData(int seed, int range, int data[], int num)
{
  int i;

  srand(seed);
  for (i=0; i<num; i++) {
    data[i] = rand() % range + 1;
    printf("%d ", data[i]);
  }
  printf("\n");

  return;
}

void InsertionSort(int x[], int n)
{
  int i, j, tmp;

  for(j=1; j<n; j++) {
    tmp = x[j]; MOVE++;
    for (i=j-1; i>=0; i--) {
      COMP++;
      if (x[i] > tmp) {x[i+1] = x[i]; MOVE++;}
      else break;
    }
    x[i+1] = tmp; MOVE++;
  }
  return;
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
      COMP++;
		} else if (i<=mid) {
			tmp[k] = x[i]; i++;
		} else {
			tmp[k] = x[j]; j++;
		}
    MOVE++;
	}
	for (k=min; k<=max; k++) {x[k] = tmp[k]; MOVE++;}
	return;
}