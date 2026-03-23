#include <stdio.h>
#include <string.h>

int SimpleSearch(char text[], char key[]);

int main(void)
{
  char text[] = "She sells seashells.";
  char key[] = "sea";
  int rc;

  printf("Text   : %s\n", text);
  printf("Keyword: %s\n", key);

  rc = SimpleSearch(text, key);

  printf("Result : ");
  if (rc != -1) {
    printf("The keyword starts from %d th character\n", rc+1);
  } else {
    printf("The keyword doesn't exist\n");
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