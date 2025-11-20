#include <stdio.h>
#include <string.h>

typedef struct student{
  int grade;
  char name[2][20];
}Student;

void InsertionSort_grade(Student x[], int n);
void InsertionSort_name(Student x[], int n, int f);

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
  InsertionSort_name(data, 5, 1);
  for (i=0; i<5; i++) printf("%d年 %s %s\n",
                             data[i].grade, data[i].name[0], data[i].name[1]);

  printf("\nSort by 姓\n");
  InsertionSort_name(data, 5, 0);
  for (i=0; i<5; i++) printf("%d年 %s %s\n",
                             data[i].grade, data[i].name[0], data[i].name[1]);

  printf("\nSort by 学年\n");
  InsertionSort_grade(data, 5);
  for (i=0; i<5; i++) printf("%d年 %s %s\n",
                             data[i].grade, data[i].name[0], data[i].name[1]);

  return;
}

void InsertionSort_grade(Student x[], int n)
{
  int i, j;
  Student tmp;

  for(j=1; j<n; j++) {
    tmp = x[j];
    for (i=j-1; i>=0; i--) {
      if (x[i].grade > tmp.grade) x[i+1] = x[i];
      else break;
    }
    x[i+1] = tmp;
  }
  return;
}


void InsertionSort_name(Student x[], int n, int f)
{
  int i, j;
  Student tmp;

  for(j=1; j<n; j++) {
    tmp = x[j];
    for (i=j-1; i>=0; i--) {
      if (strcmp(x[i].name[f], tmp.name[f]) > 0) x[i+1] = x[i];
      else break;
    }
    x[i+1] = tmp;
  }
  return;
}