#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int choose_level();
int number_guessing(int max_answer, int max_count);

int main(void)
{
    int ANSWER,num=0,continue_game=1,level,i;
    
	srand(time(NULL));
	
    level = choose_level();
    
    switch(level){
		case 1:
			printf("\n\n♢♢初級　サイコロ数当て　♢♢\n");
			while(continue_game) continue_game = number_guessing(6, 3);
			break;
			
		case 2:
			printf("\n\n♢♢中級　トランプ数当て　♢♢\n");
			while(continue_game) continue_game = number_guessing(13, 5);
            break;
		
		case 3:
			printf("\n\n♢♢上級　100までの数当て　♢♢\n");
			while(continue_game) continue_game = number_guessing(100, 7);
			break;
			
        default:
			break;
    }
	
	printf("\nゲーム終了♣\n");
	return 0;
}

int choose_level()
{
	int level;
	
	printf("\n◆◆ 数当てゲーム ◆◆");
    printf("\n１：初級 サイコロ数当て");
    printf("\n２：中級 トランプ数当て");
    printf("\n３：上級 100までの数当て");
    printf("\nレベルを選んでね♠：");
    scanf("%d",&level);
	
	return level; 
}

int number_guessing(int max_answer, int max_count)
{
	printf("数を当ててね♥　チャンスは %d回 まで♠\n",max_count);
	
	int ANSWER=rand() % max_answer + 1;
	int i=1,num,continue_game;
				
	while(i<=max_count){
		printf("\n==　%d回目のチャレンジ　==\n",i);
		printf("1 ～ %d のどれでしょう？：",max_answer);
		scanf("%d",&num);
					
		if(num==ANSWER){
			printf("あたり♥　%d回目で正解♣\n",i);
			break;
		}
					
		else if(num<ANSWER){
			printf("はずれ♦　それより大きいよ♠\n");
		}
		
		else{
			printf("はずれ♦　それより小さいよ♣\n");
		}
        i++;
	}
    
    if(i>max_count){
		printf("\n残念♠　%d回で当てられなかったのでゲームオーバー♣\n",max_count);
		printf("答えは%dでした♦\n",ANSWER);
	}
	printf("\nゲームを続ける？（つづける:1　終了:0）：");
	scanf("%d",&continue_game);
		
	return continue_game;
}