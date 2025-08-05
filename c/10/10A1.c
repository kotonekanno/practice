#include <stdio.h>

void print_ten_stars(void)
{
	int i;
	for(i=1;i<=10;i++) printf("★");
	printf("\n");
	return;
}

int main(void)
{
	print_ten_stars();
	printf("Ｃプログラミング演習\n");
	print_ten_stars();
	return 0;
}