#include<stdio.h>
int main(void)
{
    char name[20];
    int age;
    float height,weight,bmi;
    
    printf("名前を入力してください：");
    scanf("%s",name);
    printf("%sさんの年齢を入力してください：",name);
    scanf("%d",&age);
    printf("%sさんの身長を入力してください（cm）：",name);
    scanf("%f",&height);
    printf("%sさんの体重を入力してください（kg）：",name);
    scanf("%f",&weight);
    
    bmi=weight*10000/height/height;
    
    printf("******\n");
    printf("%sさんは%d歳、身長%.1fcm、体重%.1fkgですね\n",name,age,height,weight);
    printf("%sさんの肥満度指数は %.2f です\n",name,bmi);
        
    return 0;
}