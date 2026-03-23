#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  struct node* next;
  int data;
}Node;

Node* head = NULL;
Node* tail = NULL;

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
  /*p = tail;
  tail = (Node*)malloc(sizeof(Node));
  tail->next = NULL;
  tail->data = x;
  if (head == NULL) head = tail;
  else head->next = p;
  return;*/
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