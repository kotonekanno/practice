#include <stdio.h>
#include "bodydata.h"
#include "myfunc.h"

FILE* open_file(char mode[3]);

int main(void)
{
	BODY Data[100];
	int i, rc, n=0;
	FILE* fp;
	int menu;
	
	while(1){
		print_deco("操作メニュー");
		printf("１：データ登録\n");
		printf("２：データリスト表示\n");
		printf("３：ファイル保存\n");
		printf("４：ファイル読み込み\n");
		printf("メニュー番号（1～4以外）で終了：");
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				print_deco("データ登録");
				for(i=0;i<100;i++){
					Data[i] = input_bodydata();
					printf("入力を継続(1)/終了(0)："); scanf("%d", &rc);
					if(rc==0) break;
				}
				if(i==100) n=100; else n=i+1;
				break;
			case 2:
				print_deco("データリスト表示");
				printf("\n名前\t年齢\t身長\t体重\n");
				for(i=0;i<n;i++) print_bodydata(Data[i]);
				break;
			case 3:
				print_deco("ファイル保存");
				fp = open_file("w"); if(fp==NULL) break;
				for(i=0;i<n;i++) write_bodydata(fp, Data[i]);
				fclose(fp);
				break;
			case 4:
				printf("\n== ファイル読み込み ==\n");
				fp = open_file("r"); if(fp==NULL) break;
				for(i=0;i<100;i++){
					rc = read_bodydata(fp, &Data[i]);
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