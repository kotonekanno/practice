#include <stdio.h>
#define N 1000

int prime(int x[]);
int LinearSearch(int x[], int n, int y);
int BinarySearch(int x[], int n, int y);

int COUNT = 0;

int main(void)
{
  int data[N];
  int target, rc;
  int n;

  n = prime(data);  // N未満の素数n個を配列dataに格納
  printf("Input number under %d to search: ", N);
  scanf("%d", &target);

  COUNT = 0;
  printf("\nLinear Search\n");
  rc = LinearSearch(data, n, target);
  if (rc == -1) printf("Not a prime\n");
  else printf("This is the %dth prime\n", rc + 1);
  printf("Number of comparisons: %d\n", COUNT);

  COUNT = 0;
  printf("\nBinary Search\n");
  rc = BinarySearch(data, n, target);
  if (rc == -1) printf("Not a prime\n");
  else printf("This is the %dth prime\n", rc + 1);
  printf("Number of comparisons: %d\n", COUNT);

  return 0;
}

int prime(int x[])
{
  int i, n = 0, m = 0;

  int p[N];  // チェック表の宣言
  for (i = 2; i < N; i++) p[i] = 0;  // 2以上N未満の数を素数候補とする
  p[0] = p[1] = 1;  // 0と1を除外

  for (n = 2; n * n < N; n++) {
    if (p[n] == 0) for (i = n * n; i < N; i += n) p[i] = 1;  // nの倍数を除外
  }

  for (i = 2; i < N; i++) {
    if (p[i] == 0) {
      x[m++] = i;  // 除外されずに残ったiを素数として格納
      printf("%d ", i);
    }
  }
  printf("\n");
  return m;  // 素数の個数を返す
}

int LinearSearch(int x[], int n, int y)
{
  int i = 0;
  while(i < n) {
    COUNT++;
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
    COUNT++;
    if (x[mid] < y) min = mid + 1;
    else if (x[mid] > y) max = mid - 1;
    else return mid;
  }
  return -1;
}

