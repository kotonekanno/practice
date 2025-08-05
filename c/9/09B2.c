#include<stdio.h>
int main(void)
{
	int gi, ki, sum_g;
	int Sum_k[3]={0,0,0};
    int Data[5][3]={{70,71,72},{80,81,82},{90,91,92},{70,80,90},{75,85,95},};
	
	printf("\t\t科目0\t科目1\t科目2\t合 計\t平 均\n");
	
	for(gi=0; gi<5; gi++){
		
		printf("学籍番号 %d 番\t",gi);
		
		sum_g=0;
		for(ki=0; ki<3; ki++){
			printf("%d 点\t",Data[gi][ki]);
			sum_g = sum_g + Data[gi][ki];
			Sum_k[ki] = Sum_k[ki] + Data[gi][ki];
		}
		
		printf("%d 点\t", sum_g);
		printf("%.1f 点\n", (float)sum_g/3);
	
	}
	
	printf("\n【　科目平均　】\t");
	for(ki=0; ki<3; ki++) printf("%.1f点\t", (float)Sum_k[ki]/5);
	
	return 0;
}