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
    if (rc != -1) {
      for (i=s; i<s+rc; i++) printf("%c", text[i]);
      printf("\e[7m");   // 反転表示
      for (i=s+rc; i<s+rc+m; i++) printf("%c", text[i]);
      printf("\e[0m");   // 表示リセット
      s = s + rc + m;
    } else {
      printf("%s\n", text+s);
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