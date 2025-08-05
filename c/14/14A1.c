#include <stdio.h>

int main(void)
{
	FILE* fp;
	
	fp = fopen("word.txt", "r");
	if(fp == NULL){
		printf("ファイルを開けませんでした\n");
		return -1;
	}
	printf("ファイルを開きました\n");
	
	fclose(fp); printf("ファイルを閉じました\n");
	
	return 0;
}