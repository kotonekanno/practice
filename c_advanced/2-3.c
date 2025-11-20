#include <stdio.h>
#include <string.h>

typedef struct person{
  int id;
  char name[20];
}Person;

int LinearSearch_id(Person x[], int n, int y);
int LinearSearch_name(Person x[], int n, char y[]);

int main(void)
{
  Person data[8] = {{101, "Ann"}, {202, "Bob"},
                    {303, "Carol"}, {404, "Jack"},{505, "Karen"},
                    {606, "Lucy"}, {707, "Maria"}, {808, "Ted"}};

  int target_id;
  char target_name[20];
  int rc;

  printf("\nEnter the id: ");
  scanf("%d", &target_id);
  rc = LinearSearch_id(data, 8, target_id);
  if(rc == -1) printf("Couldn't find\n");
  else printf("Id: %d Name: %s\n", (data + rc) -> id, data[rc].name);

  printf("\nEnter the name: ");
  scanf("%s", target_name);
  rc = LinearSearch_name(data, 8, target_name);
  if(rc == -1) printf("Couldn't find\n");
  else printf("Id: %d Name: %s\n", data[rc].id, data[rc].name);

  return 0;
}

int LinearSearch_id(Person x[], int n, int y)
{
  int i = 0;
  while(i < n){
    if(x[i].id == y) return i;
    else i++;
  }
  return -1;
}

int LinearSearch_name(Person x[], int n, char y[])
{
  int i = 0;
  while(i < n){
    if(strcmp(x[i].name, y) == 0) return i;
    else i++;
  }
  return -1;
}