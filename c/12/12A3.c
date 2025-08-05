#include<stdio.h>

int main(void)
{
	int i;
	char* word[3]={"Hello","Cyber University","Goodbye"};
	
	for(i=0;i<3;i++) printf("%s\n",word[i]);
	
	word[1]="Thank you";
	printf("\n[変更後]\n");
	for(i=0;i<3;i++) printf("%s\n",word[i]);
	
	return 0;
}