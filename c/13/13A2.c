#include <stdio.h>

struct Body
{
	char name[32];
	int age;
	double height;
	double weight;
};

int main(void)
{
	struct Body Data[2];
	int i;
	for(i=0;i<2;i++){
		printf("\n名前：");   scanf("%s", Data[i].name);
		printf("年齢：");   scanf("%d", &Data[i].age);
		printf("身長：");   scanf("%lf", &Data[i].height);
		printf("体重：");   scanf("%lf", &Data[i].weight);
	}
	
	printf("\n名前\t年齢\t身長\t体重\n");
	for(i=0;i<2;i++){
		printf("%s\t", Data[i].name);
		printf("%d才\t", Data[i].age);
		printf("%.1fcm\t", Data[i].height);
		printf("%.1fkg\n", Data[i].weight);
	}

	
	return 0;
}