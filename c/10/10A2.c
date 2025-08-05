#include <stdio.h>

void print_stars(int n, int m)
{
	int i;
	for(i=1;i<=n;i++) printf("　");
	for(i=1;i<=m;i++) printf("★");
	printf("\n");
	return;
}

int main(void)
{
	int i;
	for(i=1;i<=5;i++) print_stars(5-i,i);
	return 0;
}