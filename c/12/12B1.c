#include<stdio.h>
#include<string.h>

void print_deco(char str[]);

int my_strlen(char str[]);

int main(void)
{
	char name[20];
	int len;
	
	printf("半角英字（19字以内）で名前を入力：");
	scanf("%s",name);
	len = my_strlen(name);
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

int my_strlen(char str[])
{
	int i=0;
	
	while(1){
		if(str[i]=='\0') break;
		else i++;
	}
	
	return i;
}