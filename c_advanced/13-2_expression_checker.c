#include <stdio.h>

#define MAX_NUM 10
int stack[MAX_NUM];
int num = 0;

#define SMALL  1
#define MEDIUM 2
#define LARGE  3

#define OK    0
#define ERROR 1

void push(int data);
int pop(void);
int check(char* str);

void main(void)
{
  char str[100];
  printf("Input the expression (up to 100 characters): ");
  scanf("%s", str);

  if (check(str) == OK) printf("The parentheses are properly matched\n");
  else printf("The parentheses are not matched\n");
  return;
}

int check(char* str) {
  int i;
  for (i=0; str[i]!='\0'; i++) {
    switch (str[i]) {
      case '(':
        push(SMALL); break;
      case '{':
        push(MEDIUM); break;
      case '[':
        push(LARGE); break;
      case ')':
        if (pop() == SMALL) break;
        else return ERROR;
      case '}':
        if (pop() == MEDIUM) break;
        else return ERROR;
      case ']':
        if (pop() == LARGE) break;
        else return ERROR;
    }
  }
  if (pop() == - 1) return OK;
  else return ERROR;
}

void push(int data)
{
	if (num == MAX_NUM) {
		printf("Stack is full\n");
		return;
	}
	stack[num++] = data;
	return;
}

int pop(void)
{
	if (num == 0) return -1;
	return stack[--num];
}