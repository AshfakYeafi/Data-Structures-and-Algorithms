#include<stdio.h>
#define N 5
int stack[N];
int top=-1;

void push(int x){
    if (top==(N-1))printf("Over Flow");
    else{
        top++;
        stack[top]=x;
    }
}

void pop(){
    int item;
    if (top==-1)printf("Under FLow");
    else{
        item=stack[top];
        top--;
        printf("%d ",item);
    }

}

void peek(){
    if (top==-1)printf("Stack Is Enpty");
    else printf("%d",stack[top]);

}

void display(){
    if (top==-1)printf("Stack is empty");
    else{
        for(int i=top;i>=0;i--)printf("%d ",stack[i]);
    }
}

int main(){
    push(5);
    push(10);
    pop();
    peek();
    display();
}
