#include <stdio.h>
#include <string.h>

int BMSearch(unsigned char text[], unsigned char key[]);

int main(void)
{
  char text[] = "She sells seashells by the seashore.";
  char key[64];
  int rc;

  printf("Text   : %s\n", text);
  printf("Keyword: "); scanf("%s", key);

  rc = BMSearch(text, key);

  printf("Result : ");
  if (rc != -1) {
    printf("The keyword starts from %d th character\n", rc+1);
  } else {
    printf("The keyword doesn't exist\n");
  }
  return 0;
}

int BMSearch(unsigned char text[], unsigned char key[])
{
  int table[256];
  int nt, nk, i, t, k;

  nt = strlen(text);
  nk = strlen(key);

  for (i=0; i<256; i++) table[i] = nk;
  for (i=0; i<nk; i++) table[key[i]] = nk-i-1;

  t = k = nk-1;
  while (t<nt) {
    if (text[t] == key[k]) {
      if (k == 0) return t;
      t--; k--;
    } else {
      if (table[text[t]] <= nk-1-k) t = t+nk-k;
      else t = t + table[text[t]];
      k = nk-1;
    }
  }
  return(-1);
}