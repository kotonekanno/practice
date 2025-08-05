#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int ANSWER,num=0,continue_game=1,i;
    
	srand(time(NULL));
	
	while(continue_game)
	{
		printf("\n♢♢　トランプ数当て　♢♢\n");
        printf("数を当ててね♥　チャンスは 5回 まで♠\n");
		
		srand(time(NULL));
		ANSWER=rand() % 13 + 1;
		i=1;
		
		while(1)
		{
			printf("\n==　%d回目のチャレンジ　==\n",i);
			printf("1 ～ 13 のどれでしょう？：");
			scanf("%d",&num);

			if(num==ANSWER){
				printf("あたり♥　%d回目で正解♣\n",i);
				break;
			}
			
			else if(num<ANSWER){
				printf("はずれ♦　それより大きいよ♠\n");
				i++;
				if(i>=6){
					printf("\n残念♠　5回で当てられなかったのでゲームオーバー♣\n");
					printf("答えは%dでした♦\n",ANSWER);
					break;
				}
				else continue;
			}
			else{
				printf("はずれ♦　それより小さいよ♣\n");
				i++;
				if(i>=6){
					printf("\n残念♠　5回で当てられなかったのでゲームオーバー♣\n");
					printf("答えは%dでした♦\n",ANSWER);
					break;
				}
				else continue;
			}
		}
	printf("\nゲームを続ける？（つづける:1　終了:0）：");
	scanf("%d",&continue_game);
	}
    printf("\nゲーム終了♣\n");
    return 0;
}