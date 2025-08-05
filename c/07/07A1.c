#include<stdio.h>
int main(void)
{
    int ANSWER, num=0;
    
    printf("\n===　数当てゲーム　===\n");
    ANSWER=7;
    
    while(num!=ANSWER)
    {
        printf("\n整数を入力してください：");
        scanf("%d",&num);
        if(num==ANSWER) printf("正解！\n");
        else if(num<ANSWER) printf("はずれ。それより大きいよ\n");
        else printf("はずれ。それより小さいよ\n");
    }
    
    printf("\nゲーム終了\n");
     
    return 0;
}
