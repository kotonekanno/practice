#include <stdio.h>
#include <string.h>

#define TSIZE 10000
#define SSIZE 256
#define KSIZE 64

int BMSearch(unsigned char text[], unsigned char key[]);

int main(void)
{
  FILE *fp;
  char filename[20];
  char str[SSIZE];
  char text[TSIZE];
  char key[KSIZE];
  int rc, i, m, s, n;

  printf("\nFile name: "); scanf("%s", filename);
  fp = fopen(filename, "r");
  if (fp == NULL) return 1;
  n = 0;
  while (n < TSIZE-SSIZE) {
    if (fgets(str, SSIZE, fp) ==NULL) break;
    strcpy(text+n, str); n = n+strlen(str);
  }
  fclose(fp);
  printf("\n=====Text=====\n");
  m = strlen(key);

  printf("\nKeyword: "); scanf("%s", key);
  m = strlen(key);

  printf("\n=====Result=====\n");
  s = 0;
  while (1) {
    rc = BMSearch(text+s, key);
    if (rc != -1) {
      for (i=s; i<s+rc; i++) printf("%c", text[i]);
      printf("\e[7m");
      for (i=s+rc; i<s+rc+m; i++) printf("%c", text[i]);
      printf("\e[0m");
      s = s+rc+m;
    } else {
      printf("%s", text+s);
      break;
    }
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