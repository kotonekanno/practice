#include<stdio.h>

int main(void)
{
	int i;
	char word[6] = {'H','e','l','\0','o','\0'};
	
	for(i=0;i<6;i++) printf("%c",word[i]);
	printf("\n");
							
	printf("%s",word);
	printf("\n");
							
	return 0;
}