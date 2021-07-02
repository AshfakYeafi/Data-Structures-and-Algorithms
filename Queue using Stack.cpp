//Queue using stack
#include<stdio.h>

#define N 5
int s1[N],s2[N];        //Define 2 stack
int count=0,top_1=-1,top_2=-2;      //count for tracking total element in queue


void push_1(int x){     
    if(top_1==(N-1)){
        printf("Queue is full\n");
        count--;
    }
    else{
        top_1++;
        s1[top_1]=x;
    }
}

int pop_1(){
    int a=s1[top_1];
    top_1--;
    return a;
}

void push_2(int x){
    if(top_2==(N-1)){
        printf("Queue is full\n");
    }
    else{
        top_2++;
        s2[top_2]=x;
    }
}

int pop_2(){
    int a=s2[top_2];
    top_2--;
    return a;
}

void enqueue(int x){
    push_1(x);
    count++;
}

void dequeue(){
    for(int i=0;i<count;i++){
        push_2(pop_1());
    }
    int a=pop_2();
    printf("Removed :%d\n",a);
    count--;
    for(int i=0;i<count;i++){
        push_1(pop_2());
    }
}

void display(){
    int a=top_1;
    for(int i=0;i<=a;i++){
        printf("%d ",s1[i]);
    }
    
    printf("\n");
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    display();
    dequeue();
    display();
    enqueue(10);
    display();
    dequeue();
    display();
}
