#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  struct node* next;
  int data;
}Node;

Node* add_node(Node* next, int data);

int main(void)
{
  Node* head = NULL;
  Node* p;
  int data;

  while (1) {
    printf("Input integer (end with 0): ");
    scanf("%d", &data);
    if (data == 0) break;
    head = add_node(head, data);
  }
  
  printf("\n=Array data=\n");
  for (p=head; p!=NULL; p=p->next) printf("%d\t", p->data);
  printf("\n");

  while (head != NULL) {
    p = head;
    head = head->next;
    free(p);
  }

  return 0;
}

Node* add_node(Node* next, int data)
{
	Node* p;
	p = (Node*)malloc(sizeof(Node));
	p->next = next;
	p->data = data;
	return p;
}