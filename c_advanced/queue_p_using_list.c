#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

typedef struct q_node {
  struct q_node* next;
  Node* data;
}QNode;

QNode* head = NULL;
QNode* tail = NULL;

void enqueue(Node* x)
{
  QNode* p;
  p = (QNode*)malloc(sizeof(QNode));
  p->next = NULL;
  p->data = x;
  if (tail == NULL) head = p;
  else tail->next = p;
  tail = p;
  return;
}

Node* dequeue(void)
{
  Node* x;
  QNode* p;
  if (head == NULL) return NULL;
  p = head;
  x = p->data;
  head = p->next;
  free(p);
  if (head == NULL) tail = NULL;
  return x;
}