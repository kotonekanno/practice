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
	int i, rc, n=0;
	FILE* fp;
    char filename[32];
	int menu;
	
	while(1){
		printf("\n◆ 操作メニュー ◆\n");
		printf("１：データ登録\n");
		printf("２：データリスト表示\n");
		printf("３：ファイル保存\n");
		printf("４：ファイル読み込み\n");
		printf("メニュー番号（1～4以外）で終了：");
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				printf("\n== データ登録 ==\n");
				for(i=0;i<100;i++){
					Data[i] = input_bodydata();
					printf("入力を継続(1)/終了(0)："); scanf("%d", &rc);
					if(rc==0) break;
				}
				if(i==100) n=100; else n=i+1;
				break;
			case 2:
				printf("\n== データリスト表示 ==\n");
				printf("\n名前\t年齢\t身長\t体重\n");
				for(i=0;i<n;i++) print_bodydata(Data[i]);
				break;
			case 3:
				printf("\n== ファイル保存 ==\n");
				printf("ファイル名を指定："); scanf("%s", filename);
				fp = fopen(filename, "w");
				if(fp==NULL){
					printf("ファイルを開けませんでした\n");
					return -1;
				}
				for(i=0;i<n;i++){
					fprintf(fp, "%s\t%d\t%f\t%f\r\n",
						    Data[i].name, Data[i].age,
						    Data[i].height, Data[i].weight);
				}
				fclose(fp);
				break;
			case 4:
				printf("\n== ファイル読み込み ==\n");
				printf("ファイル名を指定："); scanf("%s", filename);
				fp = fopen(filename, "r");
				if(fp==NULL){
					printf("ファイルを開けませんでした\n");
					return -1;
				}
				for(i=0;i<100;i++){
					rc = fscanf(fp, "%s\t%d\t%lf\t%lf\r\n",
						        Data[i].name, &Data[i].age,
						        &Data[i].height, &Data[i].weight);
					if(rc==EOF) break;
				}
				if(i==100) n=100; else n=i;
				printf("ファイルから %d件 読み込みました\n", n);
				fclose(fp);
				break;
			default:
				printf("\n-- 終了 --\n");
				return 0;
		}
	}
	
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