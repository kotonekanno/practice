#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int* data;
  int i, n;

  printf("How many datas will you input?: ");
  scanf("%d", &n);
  data = (int*)malloc(sizeof(int) * n);

  for (i=0; i<n; i++) {
    printf("Input integer: ");
    scanf("%d", &data[i]);
  }

  printf("\n=Array data=\n");
  for (i=0; i<n; i++) printf("%d\t", data[i]);
  printf("\n");

  free(data);
  return 0;
}