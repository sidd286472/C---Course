#include<stdio.h>
#include<stdlib.h>
struct stack *node{
    struct stack *add;
    int data;
}*top=NULL;
void push(int );

void push(int n);{
    struct stack *node;
    node = (struct stack *)malloc(sizeof(struct stack));
    