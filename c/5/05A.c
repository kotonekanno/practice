#include <stdio.h>
int main(void)
{
    int score;
    
    printf("点数を入力してください　：　");
	scanf("%d",&score);
	
	if(score>=60)
	{
		printf("合格\n");
		printf("この調子で頑張りましょう\n");
	}
	else
	{
		printf("不合格\n");
		printf("再度チャレンジしましょう\n");
	}
	
	return 0;
}