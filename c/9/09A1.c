#include<stdio.h>
int main(void)
{
	int sum;
	int Data[3]={11,22,33};
	
	printf("Data[0] の値は %d です\n", Data[0]);
	printf("Data[1] の値は %d です\n", Data[1]);
	printf("Data[2] の値は %d です\n", Data[2]);
	
	sum = Data[0] + Data[1] + Data[2];
	
	printf("\n合計は %d です\n", sum);
	
	return 0;
}