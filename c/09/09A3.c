#include<stdio.h>
#define NUM 5

int main(void)
{
	int i, sum, min, max;
	int Data[NUM];
	
	for(i=0;i<NUM;i++){
		printf("Data[%d] の値を入力してください：", i);
		scanf("%d", &Data[i]);
	}
	
	sum = 0;
	max = min = Data[0];
	for(i=0;i<5;i++){
		sum += Data[i];
		if(max < Data[i]) max = Data[i];
		if(min > Data[i]) min = Data[i];
	}
		
	printf("\n合計は %d です\n",sum);
	printf("平均は %.1f です\n", (float)sum/NUM);
	printf("最大値は %d です\n",max);
	printf("最小値は %d です\n",min);
	
	return 0;
}