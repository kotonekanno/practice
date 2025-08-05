#include <stdio.h>

struct Body
{
	char name[32];
	int age;
	double height;
	double weight;
};

struct Body input_bodydata(void);
int print_bodydata(struct Body data);

int main(void)
{
	struct Body Data[2];
	int i;
	
	for(i=0;i<2;i++) Data[i]=input_bodydata();
	
	printf("\n名前\t年齢\t身長\t体重\n");
	for(i=0;i<2;i++) print_bodydata(Data[i]);

	return 0;
}

struct Body input_bodydata(void)
{
	struct Body data;
	printf("\n名前：");   scanf("%s", data.name);
	printf("年齢：");   scanf("%d", &data.age);
	printf("身長：");   scanf("%lf", &data.height);
	printf("体重：");   scanf("%lf", &data.weight);
	return data;
}

int print_bodydata(struct Body data)
{
	printf("%s\t", data.name);
	printf("%d才\t", data.age);
	printf("%.1fcm\t", data.height);
	printf("%.1fkg\n", data.weight);
}