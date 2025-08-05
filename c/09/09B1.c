#include<stdio.h>
int main(void)
{
	int gi, ki;
    int Data[5][3]={{70,71,72},{80,81,82},{90,91,92},{70,80,90},{75,85,95},};
	
	printf("\t\t科目0\t科目1\t科目2\n");
	
	for(gi=0; gi<5; gi++){
		
		printf("学籍番号 %d 番\t",gi);
		for(ki=0; ki<3; ki++){
			printf("%d 点\t",Data[gi][ki]);
		}
		printf("\n");
	
	}
	
	return 0;
}