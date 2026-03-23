#include <stdio.h>

#define MAX_NUM 10
int stack[MAX_NUM];
int num = 0;

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