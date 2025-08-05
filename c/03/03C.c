#include<stdio.h>
int main(void)
{
    char moji;
    char mojiretsu[11];
    
    printf("文字を入力してください：");
    scanf("%c",&moji);
	printf("入力した文字は%cです\n",moji);
    
    printf("文字列を入力してください：");
    scanf("%s",mojiretsu);
	printf("入力した文字列は%sです\n",mojiretsu);
    
    return 0;
}