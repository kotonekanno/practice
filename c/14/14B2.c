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
	
	printf("ファイル名を指定："); scanf("%s", filename);
	fp = fopen(filename, "r");
	if(fp==NULL){
		printf("ファイルを開けませんでした\n");
		return -1;
	}
	printf("ファイルを開きました\n");
	
	for(i=0;i<10;i++){
		rc = fscanf(fp, "%s\t%d\t%lf\t%lf\r\n",
			        Data[i].name, &Data[i].age,
			        &Data[i].height, &Data[i].weight);
		if(rc==EOF) break;
	}
	if(i==10) n=10; else n=i;
	printf("ファイルから %d件 読み込みました\n", n);
	
	fclose(fp); printf("ファイルを閉じました\n");
	
	printf("\n名前\t年齢\t身長\t体重\n");
	for(i=0;i<n;i++) print_bodydata(Data[i]);
	
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