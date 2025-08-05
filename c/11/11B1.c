#include <stdio.h>
int main(void)
{
	int Hairetu[5]={10,20,30,40,50,};
	int i;
	int* pointer;
	
	printf("配 列 名[i]\tアドレス値\t　ポインタ参照値\n");
	
	for(i=0;i<5;i++){
		pointer = &Hairetu[i];
		printf("Hairetu[%d]\t%p\t　%d\n",i, &Hairetu[i], *pointer);
	}
	
	printf("\n\nポインタ演算\tアドレス値\t　ポインタ参照値\n");
	
	pointer = &Hairetu[0];
	
	for(i=0;i<5;i++){
		printf("pointer+%d\t%p\t　%d\n",i, pointer+i ,*(pointer+i));
		printf("Hairetu+%d\t%p\t　%d\n",i, Hairetu+i, *(Hairetu+i));
		printf("\n");
	}
	
	return 0;
}