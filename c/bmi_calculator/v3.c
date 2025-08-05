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
	
    printf("\n*** 診 断 結 果 ***\n");
    printf("%sさんは%d歳、身長%.1fcm、体重%.1fkgですね\n",name,age,height,weight);
    printf("%sさんの肥満度指数は %.2f です\n",name,bmi);
	
	if(bmi>=30.0) printf("%sさんは [太り過ぎ] です\n",name);
	else if(bmi>=25.0) printf("%sさんは [太りぎみ] です\n",name);
	else if(bmi>=18.5) printf("%sさんは [標準] です\n",name);
	else if(bmi>=16.0) printf("%sさんは [やせぎみ] です\n",name);
	else printf("%sさんは [やせ過ぎ] です",name);
        
    return 0;
}