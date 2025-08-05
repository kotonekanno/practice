#include <stdio.h>
#include "bodydata.h"

BODY input_bodydata(void)
{
	BODY data;
	printf("\n名前："); scanf("%s", data.name);
	printf("年齢：");   scanf("%d", &data.age);
	printf("身長：");   scanf("%lf", &data.height);
	printf("体重：");   scanf("%lf", &data.weight);
	printf("\n");
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

int write_bodydata(FILE* fp, BODY data)
{
	fprintf(fp, "%s\t%d\t%f\t%f\r\n",
		data.name, data.age,
		data.height, data.weight);
	return 0;
}

int read_bodydata(FILE* fp, BODY* data)
{
	int rc;
	rc = fscanf(fp, "%s\t%d\t%lf\t%lf\r\n",
			   	data->name, &data->age,
			    &data->height, &data->weight);
	return rc;
}