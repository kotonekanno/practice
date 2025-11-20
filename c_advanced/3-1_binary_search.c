# include <stdio.h>
# define N 8

int LinearSearch(int x[], int n, int y);
int BinarySearch(int x[], int n, int y);

int main(void)
{
  int data[N] = {11,22,33,44,55,66,77,88};
  int target, rc;

  printf("Input number to search: ");
  scanf("%d", &target);

  printf("\nLinear Search\n");
  rc = LinearSearch(data, N, target);
  if (rc == -1) printf("Couldn't find\n");
  else printf("The element number is %d\n", rc);

  printf("\nBinary Search\n");
  rc = BinarySearch(data, N, target);
  if (rc == -1) printf("Couldn't find\n");
  else printf("The element number is %d\n", rc);

  return 0;
}

int LinearSearch(int x[], int n, int y)
{
  int i = 0;
  while(i < n) {
    if(x[i] == y) return i;
    else i++;
  }
  return -1;
}

int BinarySearch(int x[], int n, int y)
{
  int min, mid, max;
  min = 0;
  max = n - 1;
  while (min <= max){
    mid = (min + max)/2;
    if (x[mid] < y) min = mid + 1;
    else if (x[mid] > y) max = mid - 1;
    else return mid;
  }
  return -1;
}

