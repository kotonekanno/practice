#include<stdio.h>
int main(void)
{
	int usr1_age,usr2_age;
	
	printf("お１人目の年齢を入力してください：");
	scanf("%d",&usr1_age);
	printf("お２人目の年齢を入力してください：");
	scanf("%d",&usr2_age);
	
	if((usr1_age<0)||(usr2_age<0)){
		printf("*** 入力値が年齢ではないため判定できません ***\n");
		return 0;
	}
	
	if((usr1_age>=12)||(usr2_age>=12)) printf("ご利用になれます\n");
	else printf("ご利用になれません\n");
	
	return 0;
}