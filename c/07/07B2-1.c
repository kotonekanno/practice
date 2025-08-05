#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int seed,ransu, i;
	
	printf("乱数の「タネ」を入力してください：");
	scanf("%d",&seed);
	srand(seed);
	printf("%d　の値を元にした疑似乱数列を計算して表示\n\n",seed);
		
	i=1;
	while(i<=10)
	{
		ransu=rand()%6 + 1;
		printf("%d番目の値 %d\n",i,ransu);
		i++;
	}
     
    return 0;
}
