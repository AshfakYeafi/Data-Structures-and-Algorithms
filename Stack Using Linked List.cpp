//Stack Using Linked List

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *address;
};
struct Node *top=0,*new_node,*temp;

void push(int data){
    new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=data;
    new_node->address=top;
    top=new_node;
}

void pop(){
    int c=top->data;
    temp=top;
    top=top->address;
    free(temp);
    printf("Pop item: %d\n",c);
}



void display(){
    temp=top;
    while(temp!=0){
        printf("%d\n",temp->data);
        temp=temp->address;
    }
}

int main(){
    for(int i=1;i<11;i++){
        push(i);
    }
    pop();
    pop();
    display();
}
