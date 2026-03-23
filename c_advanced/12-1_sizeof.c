#include <stdio.h>

typedef struct box{
  int color;
  double width;
  double depth;
  double height;
} BOX;

int main(void)
{
  BOX data[10];

  printf("int型 は %ld バイト\n", sizeof(int) );
  printf("double型 は %ld バイト\n", sizeof(double) );
  printf("BOX型 は %ld バイト\n", sizeof(BOX) );
  printf("data は %ld バイト\n", sizeof(data) );
  printf("data[0] は %ld バイト\n", sizeof(data[0]) );
  printf("data[0].color は %ld バイト\n", sizeof(data[0].color) );
  printf("data[0].width は %ld バイト\n", sizeof(data[0].width) );
  return 0;
}