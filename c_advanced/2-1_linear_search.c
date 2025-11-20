#include <stdio.h>

int LinearSearch(int x[], int n, int y);

int main(void)
{
  int data[8] = {11,22,33,44,55,66,77,88};
  int target, rc;

  printf("Enter the target: ");
  scanf("%d", &target);

  rc = LinearSearch(data, 8, target);
  if(rc == -1) printf("Couldn't find\n");
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