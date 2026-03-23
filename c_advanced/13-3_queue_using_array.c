#include <stdio.h>

#define MAX_NUM 10
int queue[MAX_NUM];
int first = 0;
int last = 0;

void enqueue(int data)
{
	if ((last+1) % MAX_NUM == first) {
		printf("Queue is full");
		return;
	}
	queue[last] = data;
	last = (last + 1) % MAX_NUM;
	return;
}

int dequeue(void)
{
	int ret;
	if (first == last) return -1;
	ret = queue[first];
	first = (first + 1) % MAX_NUM;
	return ret;
}

int first_queue(void)
{
  if (first == last) return -1;
  else return queue[first];
}