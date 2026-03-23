#include <stdio.h>
#include <string.h>

int SimpleSearch(char text[], char key[]);

int main(void)
{
  char text[64] = "She sells seashells by the seashore.";
  char key[64] = "sea";
  int rc, i, m, s;

  printf("Text   : %s\n", text);
  printf("Keyword: %s\n", key);

  m = strlen(key);
  s = 0;
  while (1) {
    rc = SimpleSearch(text+s, key);
    printf("Result : ");
    if (rc != -1) {
      printf("The keyword starts from %d th character\n", s+rc+1);
      s = s + rc + m;
    } else {
      printf("The keyword doesn't exist\n");
      break;
    }
  }
  return 0;
}

int SimpleSearch(char text[], char key[])
{
  int i, j, n, m;

  m = strlen(key);
  n = strlen(text);

  for (i=0; i<=n-m; i++) {
    for (j=0; j<m; j++) {
      if (text[i+j] != key[j]) break;
    }
    if (j == m) return i;
  }
  return -1;
}