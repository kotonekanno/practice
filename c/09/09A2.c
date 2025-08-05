#include<stdio.h>
int main(void)
{
	int i, sum;
	int Data[5];
	
	for(i=0;i<5;i++){
		printf("Data[%d] の値を入力してください：", i);
		scanf("%d", &Data[i]);
	}
	
	sum = 0;
	for(i=0;i<5;i++) sum += Data[i];
	
	printf("\n合計は %d です\n", sum);
	
	return 0;
}