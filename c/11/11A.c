#include <stdio.h>
int main(void)
{
	int hensu;
	int* p_hensu;
	
	p_hensu = &hensu;
	
	printf("＝＝hensuのアドレス＝＝\n");
	printf("　%p\n\n", &hensu);
	
	hensu = 100;
	
	printf("＝＝hensuの値 参照＝＝\n");
	printf("・普通の変数　%d\n", hensu);
	printf("・ポインタで　%d\n\n", *p_hensu);
	
	*p_hensu = 200;
	
	printf("＝＝hensuの値 参照＝＝\n");
	printf("・普通の変数　%d\n", hensu);
	printf("・ポインタで　%d\n\n", *p_hensu);
	
	return 0;
}