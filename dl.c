#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *start=NULL, *node, *temp;
void insert(){
    char ch;
    do{
        node = (struct node *)malloc(sizeof(struct node));
        printf("enter the no:");
        scanf("%d",&node->data);
        node->prev=NULL;
        node->next=NULL;
        if(start==NULL){
            start=node;
            temp=node;
        }
        else{
            temp->next = node;
            node->prev = temp;
            temp =node;
        }
        printf("do you want to continue:");
        fflush(stdin);
        scanf("%c",&ch);
    } while (ch == 'y' || ch == 'Y');
    void show(){
        temp = start;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp = temp->next;
        }
    }
    void main(){
        insert();
        show();
    }
   

}