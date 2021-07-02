#include<stdio.h>

#define N 5

int queue[N];
int front=-1,rear=-1;

void enqueue(int x){        //function for insertion element at end position
    if(rear==(N-1)){        //cheak if the queue is full?
        printf("List is full");
    }
    else if (rear==-1 && front==-1){    //if no element is entered in the queue
        front=rear=0;           // init front and rare value=-1
        queue[rear]=x;
    }
    else{       // default case
        rear++;
        queue[rear]=x;
    }
}

void dequeue(){     //function for deletation element from top position
    if(front==-1 && rear==-1){      //cheak if queue is empty or not?
        printf("List is empty");
    }
    else if(front==rear){       // only one elemet is remain so after delete set front and rare value = -1
        front=rear=-1;
    }
    else{           //default case
        front++;
    }
}


void display(){     //function for display all element from front index to rare index
    if(rear==-1 and front==-1){
        printf("List is empty");
    }
    else{
        for(int i=front;i<=rear;i++){
        printf("%d ",queue[i]);
        }
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
