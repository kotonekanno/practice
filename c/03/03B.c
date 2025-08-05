#include<stdio.h>
int main(void)
{
    float x;
    
    printf("キーボードから数値を入力してください⇩\n");
    scanf("%f",&x);
    printf("入力した値は%fです\n",x);
    
    return 0;
}