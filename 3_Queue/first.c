// this is a Queue example program

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front;
struct node *rear;

void enqueue(int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = x;
    temp->next=NULL;

    if (front == NULL && rear == NULL)
    {
        front = rear = temp;
    }

    else
    {
        rear->next = temp;
        rear=temp;
        
    }
}

void dequeue()
{
    if (front == NULL && rear == NULL)
    {
        printf("Queue is empty\n");
    }

    else
    {
        front = front->next;
    }
}

void print()
{
    struct node *temp1 = front;
    int i = 0;
    while (temp1 != NULL)
    {
        printf("%d\t", temp1->data);
        if (i == 10)
        {
            getchar();
        }
        i++;
        temp1=temp1->next;
    }

    printf("\n\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(50);
    // print();
    dequeue();
    dequeue();
    dequeue(); 
    print();
}