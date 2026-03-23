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
  Node* q;
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

  printf("\n=Search data=\n");
  while (1) {
    printf("Input the target (end with 0): ");
    scanf("%d", &data);
    if (data == 0) break;
    if (head->data == data) {
      printf("Couldn't find\n");
      continue;
    }
    /*for (q=head, p=q->next; p!=NULL; q=q->next, p=q->next) {
      if (p->data == data) break;
    }
    if (p == NULL) printf("Counldn't find\n");
    else {
      printf("Found\n");
      q->next = p->next;
      p->next = head;
      head = p;
    }*/
   for (q=head; q->next!=NULL; q=q->next) {
    if (q->next->data == data) break;
   }
   if (q->next == NULL) printf("Counldn't find\n");
   else {
    printf("Found\n");
    p = head;
    head = q->next;
    q->next = q->next->next;
    head->next = p;
   }
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