#include<stdio.h>
int main(void)
{
    int a,b,gokei;
    float heikin;
    
    printf("英語の点数を入力してください：");
    scanf("%d",&a);
    printf("数学の点数を入力してください：");
    scanf("%d",&b);
    
    gokei=a+b;
    heikin=(float)gokei/2.0;
    
    printf("合計点は%d点、平均点は%f点です\n",gokei,heikin);
    
    return 0;
}