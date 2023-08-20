#include<iostream>
#include<cstdio>

using namespace std;

struct linked_list
{
  int data;
  struct linked_list *next;
};

typedef struct linked_list list;

void traverse(list *start)
{
  list *temp=start;
  while(temp != NULL)
  {
    cout<<temp->data<<" -> ";
    temp = temp->next;
  }
}
