#include <stdio.h>
#include <string.h>
//#include "myfunc.h"

//指定されたファイルを開く
FILE* open_file(char mode[])
{
	FILE* fp;
	char filename[32];
	
	printf("ファイル名を指定："); scanf("%s", filename);
	fp = fopen(filename, mode);
	if(fp==NULL){
		printf("ファイルを開けませんでした\n");
		return NULL;
	}
	return fp;
}

//全角文字を*で飾り付ける
void print_deco(char str[])
{
	int i,len;
	len=strlen(str);
	printf("\n");
	for(i=0;i<(len/3+4);i++) printf("＊");
	printf("\n＊　%s　＊\n",str);
	for(i=0;i<(len/3+4);i++) printf("＊");
	printf("\n");	
	return;
}