#include <stdio.h>

#define MAX_NUM 10
int queue[MAX_NUM];
int first = 0;
int last = 0;

void enqueue(int data);
int dequeue(void);
int first_queue(void);

void main(void)
{
  int rc, num;
  char menu[4][20] = {"", "カレー", "牛丼", "ラーメン"};

  while (1) {
    printf("\n%s:1 %s:2 %s:3 Next:0 Done:-1\n", menu[1], menu[2], menu[3]);
    printf("Input the order number: ");
    scanf("%d", &num);
    switch (num) {
      case -1:
        rc = dequeue();
        if (rc != -1) printf("%s was done\n", menu[rc]);
      case 0:
        rc = first_queue();
        if (rc != -1) printf("Make %s next\n", menu[rc]);
        break;
      case 1:
      case 2:
      case 3:
        enqueue(num);
        printf("Received %s order\n", menu[num]);
        break;
      default:
        printf("Bye\n"); return;
    }
  }
  return;
}

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