#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int ransu, i;
	
	srand(time(NULL));
	printf("現在時刻 の値を元にした疑似乱数列を計算して表示\n\n");
		
	i=1;
	while(i<=10)
	{
		ransu=rand()%6 + 1;
		printf("%d番目の値 %d\n",i,ransu);
		i++;
	}
     
    return 0;
}
