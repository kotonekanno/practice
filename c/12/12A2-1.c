#include<stdio.h>

int main(void)
{
	int i;
	char* word = "Hello";
	
	for(i=0;i<6;i++) printf("%c",word[i]);
	printf("\n");
							
	printf("%s",word);
	printf("\n");
	
	word = "Cyber University";
	
	printf("%s",word);
	printf("\n");
	
	return 0;
}