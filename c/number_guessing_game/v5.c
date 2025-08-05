#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int choose_level();
int number_guessing(int max_answer, int max_count);

int main(void)
{
    int ANSWER,num=0,continue_game=1,level,i;
	char game_name[4][30] = {
		"初級 サイコロ数当て",
		"中級 トランプ数当て",
		"上級 100までの数当て",
		"達人 1000までの数当て",
	};
    
	srand(time(NULL));
	
	printf("\n◆◆ 数当てゲーム ◆◆");
	
	while(1){
        level = choose_level(game_name);
		
        switch(level){
            case 1:
                printf("\n\n♢♢　%s　♢♢\n",game_name[0]);
                while(continue_game) continue_game = number_guessing(6, 3);
                continue;

            case 2:
                printf("\n\n♢♢　%s　♢♢\n",game_name[1]);
                while(continue_game) continue_game = number_guessing(13, 5);
                continue;

            case 3:
                printf("\n\n♢♢　%s　♢♢\n",game_name[2]);
                while(continue_game) continue_game = number_guessing(100, 7);
                continue;

            case 4:
                printf("\n\n♢♢　%s　♢♢\n",game_name[3]);
                while(continue_game) continue_game = number_guessing(1000, 10);
                break;

            default:
                break;
        }
		break;
    }
	
	printf("\nゲーム終了♣\n");
	return 0;
}

int choose_level(char game_name[5][32])
{
	int level,i;
	
	for(i=0;i<4;i++) printf("\n%d：%s",i+1,game_name[i]);
    printf("\nレベルを選んでね♠（1～4以外で終了）：");
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