#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int ransu, i;
	
	printf("0 ～%d 間の値をランダムに10個表示\n\n",RAND_MAX);
		
	i=1;
	while(i<=10)
	{
		ransu=rand()%6 + 1;
		printf("%d番目の値 %d\n",i,ransu);
		i++;
	}
     
    return 0;
}
