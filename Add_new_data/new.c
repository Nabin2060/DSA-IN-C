#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};

struct node *head =NULL;
void insert(int x){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next =head;
    head=temp;
}
void deleteAtFirstNode(){
    head=head->next;
}

void deleteAtListNode(){
    struct node *temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
}
void print(){
    struct node* temp1=head;
    while(temp1!=NULL){
        printf("%d |",temp1->data);
        printf("%p |",temp1->next);

        temp1=temp1->next;
    }

    }
int main(){
    insert(5);
    insert(15);
    insert(25);
    insert(35);

    deleteAtFirstNode();
    deleteAtListNode();

    print();

}
