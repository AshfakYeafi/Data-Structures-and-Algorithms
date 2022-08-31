#include<stdio.h>
#include<stdlib.h>

struct Node{  //creating node structure
    int data;
    struct Node *pre_address,*next_address; //pre_node will store address of the previous node, next_node will store the address of the next node address
};

struct Node *head=0,*tail,*new_node,*pre_node,*cur_node,*next_node; //head will store the 1st element address and tail will store the address of the last element
int count=0;

struct Node * c_node(){     //function for creating new node
    count++;
    return (struct Node*)malloc(sizeof(struct Node));
}



void append(int data){
    new_node=c_node();
    new_node->data=data;

    new_node->pre_address=0;
    new_node->next_address=0;

    if (head==0){
        head=new_node;
        cur_node=new_node;
    }

    else{
        cur_node->next_address=new_node;
        new_node->pre_address=cur_node;
        cur_node=new_node;
    }
    tail=new_node;
}

void display(){
    cur_node=head;
    while(cur_node!=0){
        printf("%d\n",cur_node->data);
        cur_node=cur_node->next_address;
    }

}

void reverse_display(){
    cur_node=tail;
    while(tail!=0){
        printf("%d\n",tail->data);
        tail=tail->pre_address;
    }
}

void insert(int pos,int data){
    if(pos==0){
        new_node=c_node();
        new_node->data=data;
        new_node->pre_address=0;
        new_node->next_address=head;
        head=new_node;
    }

    else if(pos==-1){
        new_node=c_node();
        new_node->data=data;
        tail->next_address=new_node;
        new_node->pre_address=tail;
        new_node->next_address=0;
        tail=new_node;
    }

    else{
        int i=1;
        cur_node=head;
        new_node=c_node();
        new_node->data=data;
        while(i<pos){
            cur_node=cur_node->next_address;
            i++;
        }
        new_node->pre_address=cur_node;
        new_node->next_address=cur_node->next_address;
        cur_node->next_address->pre_address=new_node;
        cur_node->next_address=new_node;
    }
}

int main(){
    for(int i=1;i<11;i++){
        append(i);
    }
    insert(2,100);
    display();
}
