#include<stdio.h>
#include<string.h>

int main(void)
{
	int i;
	char word[20] = "Hello";
	
	for(i=0;i<6;i++) printf("%c",word[i]);
	printf("\n");
	
	printf("%s",word);
	printf("\n");
	
	//word="Cyber University";
	strcpy(word, "Cyber University");
	
	printf("%s",word);
	printf("\n");
	
	return 0;
}