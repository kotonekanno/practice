#include <stdio.h>

typedef struct size
{
	double x;
	double y;
}SIZE;

double menseki(SIZE paper)
{
	double s;
	s=paper.x * paper.y;
	paper.x=0.0;  //値変更の実験
	return s;
}

double menseki_p(SIZE* paper)
{
	double s;
	s=paper->x * paper->y;
	paper->x=0.0;  //値変更の実験
	return s;
}

int main(void)
{
	SIZE A4={21.9, 29.7};
	SIZE* ptr;
	
	ptr = &A4;
	
	printf("A4のサイズは 縦 %fcm、横 %fcm\n", A4.y, A4.x);
	printf("ptrの指すサイズは 縦 %fcm、横 %fcm\n", ptr->y, ptr->x);
	
	printf("\nA4から求めた面積は %f 平方cm\n", menseki(A4));
	printf("&A4から求めた面積は %f 平方cm\n", menseki_p(&A4));
	printf("ptrから求めた面積は %f 平方cm\n", menseki_p(ptr));
		
	return 0;
}