#include <stdio.h>

int calc_sum(int Num[], int n);
	
int main(void)
{
	int i,sum;
	int Num[5]={10,20,30,40,50,};
	
	for(i=0;i<5;i++) printf("%d\t",Num[i]);
	printf("\n");
	
	sum = calc_sum(Num,5);
	printf("合　計 %d\n",sum);
	
	return 0;
}

int calc_sum(int Num[], int n)
{
	int i, sum=0;
	
	for(i=0;i<n;i++){
		sum += Num[i];
	}
	
	return sum;
}