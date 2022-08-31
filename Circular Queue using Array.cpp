#include<stdio.h>
#define N 5

int queue[N];
int front=-1,rear=-1;
void enqueue(int x){
    if (front==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else if(((rear+1)%N)==front){
        printf("List is full\n");
    }
    else{
        rear=(rear+1)%N;
        queue[rear]=x;
    }
}

void dequeue(){
    if(front==-1){
        printf("Emply list\n");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        front=(front+1)%N;
    }
}

void display(){
    if (front==-1){
        printf("Queue is Empty");
    }
    
    else{
        int i=front;
        while(i!=rear){
            printf("%d ",queue[i]);
            i=(i+1)%N;
        }
        printf("%d ",queue[i]);
        printf("\n");
    }
    
}



int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    dequeue();
    display();
    enqueue(6);
    display();
}
