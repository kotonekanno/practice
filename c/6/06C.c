#include<stdio.h>
int main(void)
{
	int seisu;
	
	printf("整数を入力してください：");
	scanf("%d",&seisu);
	
	switch(seisu){
		case 1:
			printf("1が入力されました\n");
			break;
		case 2:
		case 3:
			printf("2または3が入力されました\n");
			break;
		default:
			printf("1～3以外が入力されました\n");
			break;
	}
	
	printf("switch文を終了しました\n");
	
	return 0;
}