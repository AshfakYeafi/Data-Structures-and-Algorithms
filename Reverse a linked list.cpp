#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *address;
};
struct Node *head=0,*pre_node,*cur_node,*next_node,*new_node;
int count=0;


struct Node * c_creat(){
    count++;
    return (struct Node*)malloc(sizeof(struct Node));
}

void append(int data){
    new_node=c_creat();
    if(new_node==NULL)printf("Cant Allocate Memory");
    else{
        new_node->data=data;
        new_node->address=0;
        if(head==0){
            head=new_node;
            cur_node=new_node;
        }
        else{
            cur_node->address=new_node;
            cur_node=new_node;
        }
    }
}

void display(){
    cur_node=head;
    while(cur_node!=0){
        printf("%d\n",cur_node->data);
        cur_node=cur_node->address;
    }
    printf("Total Element is :%d\n",count);
}

void reverse(){
    cur_node=head;
    pre_node=0;
    next_node=cur_node;
    while(cur_node!=0){
        next_node=cur_node->address;
        cur_node->address=pre_node;
        pre_node=cur_node;
        cur_node=next_node;

    }
    head=pre_node;

}

int main(){
    for(int i=1;i<11;i++){
        append(i);
    }
    reverse();
    display();
}
