#include<stdio.h>
int main(void)
{
	int num1,num2,num3,max;
	
	printf("整数1を入力してください：");
	scanf("%d",&num1);
	printf("整数2を入力してください：");
	scanf("%d",&num2);
	printf("整数3を入力してください：");
	scanf("%d",&num3);
	
	max=num1;
    if(max<=num2) max=num2;
	if(max<=num3) max=num3;
	printf("最大値は%dです\n",max);
	
	return 0;
}