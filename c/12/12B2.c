#include<stdio.h>
#include<string.h>

void print_deco(char str[]);

int main(void)
{
	char name[20];
	int len;
	
	printf("半角英字（19字以内）で名前を入力：");
	fgets(name,20,stdin);
	len = strlen(name);
	if(name[len-1]=='\n') name[len-1]='\0';
	len=strlen(name);
	printf("名前は %d文字 ですね\n",len);
	
	print_deco(name);
	
	return 0;
}

void print_deco(char str[])
{
	int i,len;
	
	len=strlen(str);
	
	printf("\n");
	for(i=0;i<(len+4);i++) printf("*");
	printf("\n* %s *\n",str);
	for(i=0;i<(len+4);i++) printf("*");
	printf("\n");
	
	return;
}