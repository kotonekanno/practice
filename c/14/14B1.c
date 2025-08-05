#include <stdio.h>

typedef struct body
{
	char name[32];
	int age;
	double height;
	double weight;
}BODY;

BODY input_bodydata(void);
int print_bodydata(BODY data);

int main(void)
{
	BODY Data[10];
	int i, rc, n;
	FILE* fp;
    char filename[32];
	
	for(i=0;i<10;i++){
		Data[i]=input_bodydata();
		printf("入力を継続(1)/終了(0)："); scanf("%d", &rc);
		if(rc==0) break;
	}
	if(i==10) n = 10; else n = i + 1;
	
	printf("\n名前\t年齢\t身長\t体重\n");
	for(i=0;i<n;i++) print_bodydata(Data[i]);
	
	printf("\nファイル名を指定："); scanf("%s", filename);
	fp = fopen(filename, "a");
	if(fp==NULL){
		printf("ファイルを開けませんでした");
		return -1;
	}
	printf("ファイルを開きました\n");
	
	for(i=0;i<n;i++){
		fprintf(fp, "%s\t%d\t%f\t%f\r\n",
			    Data[i].name, Data[i].age,
			    Data[i].height, Data[i].weight);
	}
	printf("ファイルへ書き出しました\n");
	
	fclose(fp); printf("ファイルを閉じました\n");
	
	return 0;
}

BODY input_bodydata(void)
{
	BODY data;
	printf("\n名前："); scanf("%s", data.name);
	printf("年齢：");   scanf("%d", &data.age);
	printf("身長：");   scanf("%lf", &data.height);
	printf("体重：");   scanf("%lf", &data.weight);
	return data;
}

int print_bodydata(BODY data)
{
	printf("%s\t", data.name);
	printf("%d才\t", data.age);
	printf("%.1fcm\t", data.height);
	printf("%.1fkg\n", data.weight);
	return 0;
}