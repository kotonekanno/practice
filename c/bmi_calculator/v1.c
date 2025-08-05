#include<stdio.h>
int main(void)
{
    char name[21];
    int age;
    float height,weight;
    
    printf("名前を入力してください：");
    scanf("%s",name);
    printf("%sさんの年齢を入力してください：",name);
    scanf("%d",&age);
    printf("%sさんの身長を入力してください：",name);
    scanf("%f",&height);
    printf("%sさんの体重を入力してください：",name);
    scanf("%f",&weight);
    
    printf("%sさんは%d歳、身長%.1fcm、体重%.1fkgですね\n",name,age,height,weight);
    
    return 0;
}