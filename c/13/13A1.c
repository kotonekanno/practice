#include <stdio.h>

struct Body
{
	int age;
	double height;
	double weight;
};

int main(void)
{
	struct Body data;
	
	printf("年齢：");   scanf("%d", &data.age);
	printf("身長：");   scanf("%lf", &data.height);
	printf("体重：");   scanf("%lf", &data.weight);
	
	printf("\n年齢\t身長\t体重\n");
	printf("%d才\t", data.age);
	printf("%.1fcm\t", data.height);
	printf("%.1fkg\n", data.weight);
	
	return 0;
}