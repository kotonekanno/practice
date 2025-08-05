#include <stdio.h>
int main(void)
{
	int x;
	printf("10と比較したい数を 整数で入力してください： ");
	scanf("%d",&x);
	
	printf("\n\n「10==%d」式の値は %d\n",x,10==x);
    if(10==x) printf(" if(10==%d) は ○ を実行",x);
	else printf("if(10==%d) は ✕ を実行",x);
	
	printf("\n\n「10!=%d」式の値は %d\n",x,10!=x);
	if(10!=x) printf("if(10!=%d) は ○ を実行",x);
	else printf("if(10==%d) は ✕ を実行",x);
	
	printf("\n\n「10>%d」式の値は %d\n",x,10>x);
	if(10>x) printf("if(10>%d) は ○ を実行",x);
	else printf("if(10>%d) は ✕ を実行",x);
	
	printf("\n\n「10<%d」式の値は %d\n",x,10<x);
	if(10<x) printf("if(10<%d) は ○ を実行",x);
	else printf("if(10<%d) は ✕ を実行",x);
	
	return 0;
}