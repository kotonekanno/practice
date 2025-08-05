#include<stdio.h>
int main(void)
{
    int a=7;
    int b=2;
    
    printf("整数 a を入力してください：");
    scanf("%d",&a);
    printf("整数 b を入力してください：");
    scanf("%d",&b);
    
    printf("%d ÷ %d = %d 余り %d\n",a,b,a/b,a%b);
    
    return 0;
}