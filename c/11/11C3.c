#include <stdio.h>

void sum_max_min(int Num[],int n,int* pSum,int* pMax,int*pMin);
	
int main(void)
{
	int i,sum,max,min;
	int Num[5]={10,20,30,40,50,};
	
	for(i=0;i<5;i++) printf("%d\t",Num[i]);
	printf("\n");
	
	sum_max_min(Num,5,&sum,&max,&min);
	printf("合　計 %d\n最大値 %d\n最小値 %d\n",sum,max,min);
	
	return 0;
}

void sum_max_min(int Num[], int n, int* pSum,int* pMax,int* pMin)
{
	int i;
	
	*pSum=*pMax=*pMin=Num[0];
	for(i=1;i<n;i++){
		*pSum += Num[i];
		if(*pMax<Num[i]) *pMax=Num[i];
		if(*pMin>Num[i]) *pMin=Num[i];
	}
	
	return;
}