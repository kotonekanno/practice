#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  struct node* next;
  int data;
}Node;

Node* head = NULL;
Node* tail = NULL;

void enqueue(int x);
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

void enqueue(int x)
{
  Node* p;
  p = (Node*)malloc(sizeof(Node));
  p->next = NULL;
  p->data = x;
  if (tail == NULL) head = p;
  else tail->next = p;
  tail = p;
  return;
}

int dequeue(void) {
  int x;
  Node* p;
  if (head == NULL) return -1;
  p = head;
  x = p->data;
  head = p->next;
  free(p);
  if (head == NULL) tail = NULL;
  return x;
}

int first_queue(void)
{
  if (head == NULL) return -1;
  else return head->data;
}