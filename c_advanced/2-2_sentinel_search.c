#include <stdio.h>

int SetinelSearch(int x[], int n, int y);

int main(void){
  int data[9] = {11,22,33,44,55,66,77,88};
  int target;
  int rc;

  printf("Enter the target: ");
  scanf("%d", &target);

  rc = SetinelSearch(data, 8, target);
  if(rc == -1) printf("Couldn't find\n");
  else printf("The element number is %d\n", rc);
  
  return 0;
}

int SetinelSearch(int x[], int n, int y)
{
  int i = 0;
  x[n] = y;
  while(1) {
    if(x[i] == y) break;
    else i++;
  }
  if(i < n) return i;
  return -1;
}