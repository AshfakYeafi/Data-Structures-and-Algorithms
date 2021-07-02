#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* address;
};

struct Node *front=0,*rare=0,*new_node,*temp;

int count=0;

struct Node * c_make(){
    return (struct Node*)malloc(sizeof(struct Node));
}

void enqueue(int data){
    new_node=c_make();
    new_node->data=data;
    new_node->address=0;
    if(front==0){
        front=rare=new_node;
    }
    else{
        rare->address=new_node;
        rare=new_node;
    }
}

void dequeue(){
    if(front==0){
        printf("List is empty");
    }
    else if (front==rare){
        front=rare=0;
    }
    else{
        temp=front;
        front=front->address;
        free(temp);
    }
}




void display(){
    temp=front;
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->address;
    }
    printf("\n");
}

int main(){
    enqueue(5);
    enqueue(4);
    enqueue(7);
    enqueue(10);
    enqueue(9);
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
}
