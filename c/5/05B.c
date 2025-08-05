#include <stdio.h>
int main(void)
{
    int score;
    
    printf("点数を入力してください　：　");
	scanf("%d",&score);
	
	if(score<0|100<score) printf("入力点数が0～100点ではありません\n");
	else if(score>=80) printf("合格\nたいへん良く出来ました\n");
	else if(score>=60) printf("合格\n良く出来ました");
	else if(score>=40) printf("不合格\nあと一歩です\n");
	else printf("不合格\n基礎から見直しましょう\n");
	
	return 0;
}