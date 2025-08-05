#include <stdio.h>
int main(void)
{
    int x;
	
	printf("10と比較したい数を 整数で入力してください： ");
	scanf("%d",&x);
	
	printf("\n「10 == %d」式の値は %d\n\n",x,10==x);
	printf("「10 != %d」式の値は %d\n\n",x,10!=x);
	printf("「10 > %d」式の値は %d\n\n",x,10>x);
	printf("「10 < %d」式の値は %d\n\n",x,10<x);
	
	return 0;
}