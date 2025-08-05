#include<stdio.h>
int main(void)
{
	int age;
	
	printf("年齢を入力してください：");
	scanf("%d",&age);
	
	if((6<=age)&&(age<12)) printf("ご利用になれます\n");
	else printf("ご利用になれません\n");
	return 0;
}