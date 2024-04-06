#include<stdio.h>
#include<conio.h>
#define maxsize 5

int tos=-1;
int stack[maxsize];

//isfull operation//

// bool isfull(){
//     if (tos==maxsize-1)
//     {
       
//     }
    
// }

void push(int x){
    if (tos==maxsize-1)
    {
        printf("stack is overflow");

    }
    else{
        tos=tos+1;
        stack[tos]=x;
    }
    
}
void pop(){
    if (tos==-1)
    {
        printf("stack is empty");
    }
    else{
        tos=tos-1;
    }
    
}
void print(){
    for(int i=tos;i>=0;i--){
        printf("%d \n", stack[i]);
    }
}

int main(){
    push(5);
    push(30);
    push(10);
    push(20);
    push(40);
    // push(40);

    pop();
    pop();
    pop();
    pop();
    pop();


    
    print();
    
}
// q.n
// top of value // top of value index