#include <stdio.h>

int main(void)
{
	FILE* fp;
	
	fp = fopen("word.txt", "a");
	if(fp == NULL){
		printf("ファイルを開けませんでした\n");
		return -1;
	}
	printf("ファイルを開きました\n");
	
	fprintf(fp, "Let's enjoy programming!\n");
	printf("ファイルへ書き込みました\n");
	
	fclose(fp); printf("ファイルを閉じました\n");
	
	return 0;
}