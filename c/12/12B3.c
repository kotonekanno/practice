#include<stdio.h>
#include<string.h>

void print_deco(char str[]);

int main(void)
{
	char name[20];
	int len;
	char word[100]="Hello ";
	char password[10]="password";
	char pass[20];
	
	printf("半角英字（19字以内）で名前を入力：");
	fgets(name,20,stdin);
	len = strlen(name);
	if(name[len-1]=='\n') name[len-1]='\0';
	//len=strlen(name);
	//printf("名前は %d文字 ですね\n",len);
	
	printf("パスワードを入力：");
	scanf("%s",pass);
	if(strcmp(pass,password)!=0)
	{
		printf("パスワードが違います\n");
		return 1;
	}
	
	print_deco(strcat(word,name));
	
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