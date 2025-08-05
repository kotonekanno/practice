#include <stdio.h>

double odd(int in)
{
	int out;
	out = 2*in-1;
	return out;
}

int main(void)
{
	int in;
	double kekka=0;
	
	printf("関数oddへの入力：");
	scanf("%d",&in);
	kekka = odd(in);
	printf("関数oddから出力：%f\n",kekka);
	
	return 0;
}