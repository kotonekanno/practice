#include <stdio.h>

void swap(int* px, int* py);

int main(void)
{
	int i,j;
	int Num[5]={37,29,53,12,41};
	
	for(i=0;i<5;i++) printf("%d\t",Num[i]);
	
	printf("\n\n＝＝昇順に並べ替え＝＝\n\n");
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(Num[i]>Num[j]) swap(&Num[i], &Num[j]);
		}
	}
	
	for(i=0;i<5;i++) printf("%d\t",Num[i]);
	
	return 0;
}

void swap(int* px, int* py)
{
	int tmp;
	
	tmp=*px;
	*px=*py;
	*py=tmp;
	
	return;
}