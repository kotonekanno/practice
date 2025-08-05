typedef struct body
{
	char name[32];
	int age;
	double height;
	double weight;
}BODY;

BODY input_bodydata(void);
int print_bodydata(BODY data);
int write_bodydata(FILE* fp, BODY data);
int read_bodydata(FILE* fp, BODY* data);