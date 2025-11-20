#include <stdio.h>
#include <string.h>

typedef struct student{
  int grade;
  char name[2][20];
}Student;

void SelectionSort_grade(Student x[], int n);
void SelectionSort_name(Student x[], int n, int f);

void main()
{
  int i;
  Student data[5] = {{3, {"いとう", "たけし"}},
                     {3, {"加藤", "まさる"}},
                     {3, {"いとう", "アリサ"}},
                     {1, {"たなか", "はるき"}},
                     {2, {"かとう", "さちこ"}},};

  printf("\nBefore Sort\n");
  for (i=0; i<5; i++) printf("%d年 %s %s\n",
                             data[i].grade, data[i].name[0], data[i].name[1]);

  printf("\nSort by 名\n");
  SelectionSort_name(data, 5, 1);
  for (i=0; i<5; i++) printf("%d年 %s %s\n",
                             data[i].grade, data[i].name[0], data[i].name[1]);

  printf("\nSort by 姓\n");
  SelectionSort_name(data, 5, 0);
  for (i=0; i<5; i++) printf("%d年 %s %s\n",
                             data[i].grade, data[i].name[0], data[i].name[1]);

  printf("\nSort by 学年\n");
  SelectionSort_grade(data, 5);
  for (i=0; i<5; i++) printf("%d年 %s %s\n",
                             data[i].grade, data[i].name[0], data[i].name[1]);

  return;
}

void SelectionSort_grade(Student x[], int n)
{
  int i, j, max_id;
  Student tmp;

  for (j=n-1; j>0; j--) {
    max_id = 0;
    for (i=1; i<=j; i++) {
      if (x[max_id].grade < x[i].grade) max_id = i;
    }
    tmp = x[j];
    x[j] = x[max_id];
    x[max_id] = tmp;
  }
  return;
}


void SelectionSort_name(Student x[], int n, int f)
{
  int i, j, max_id;
  Student tmp;

  for (j=n-1; j>0; j--) {
    max_id = 0;
    for (i=1; i<=j; i++) {
      if (strcmp(x[max_id].name[f], x[i].name[f]) < 0) max_id = i;
    }
    tmp = x[j];
    x[j] = x[max_id];
    x[max_id] = tmp;
  }
  return;
}