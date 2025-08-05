#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int ANSWER, num=0,continue_game=1;
    
	srand(time(NULL));
	
	while(continue_game)
	{
		printf("\n===　数当てゲーム　===\n");
		ANSWER=rand()%6 + 1;

		while(1)
		{
			printf("\n整数を入力してください：");
			scanf("%d",&num);
			
			if(num==ANSWER){
				printf("正解！答えは%d！\n",num);
				break;
			}
			else if(num<ANSWER) printf("はずれ。それより大きいよ\n");
			else printf("はずれ。それより小さいよ\n");
		}
		
		printf("\nゲームを続けますか？（つづける:1　終了:0）：");
		scanf("%d",&continue_game);
	}
    
    printf("\nゲーム終了\n");
     
    return 0;
}