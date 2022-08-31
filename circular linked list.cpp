#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *address;
};

struct Node *head=0,*curr_node,*new_node;
int count;

struct Node * c_node(){
    count++;
    return (struct Node*)malloc(sizeof(struct Node));
}

void append(int data){
    new_node=c_node();
    new_node->data=data;
    new_node->address=0;

    if(head==0){
        head=new_node;
        curr_node=head;
    }
    else{
        curr_node->address=new_node;
        curr_node=new_node;
        curr_node->address=head;
    }
}

void display(){
    curr_node=head;
    while (curr_node->address!=head){
        printf("%d\n",curr_node->data);
        curr_node=curr_node->address;
    }
    printf("%d\n",curr_node->data);
}


int main(){
    for(int i=1;i<4;i++){
        append(i);
    }
    display();
}
