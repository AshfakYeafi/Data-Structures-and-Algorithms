#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * address;
};

struct Node *head=NULL,*new_node;
int counter=0;

struct Node * c_node(){
    counter++;
    return (struct Node*)malloc(sizeof(struct Node));
}

void insertFirst(int value){
    new_node=c_node();
    new_node->data=value;
    new_node->address=NULL;
    if (head==NULL){
        head=new_node;
    }
    else{
        new_node->address=head;
        head=new_node;
    }
}

void insertLast(int value){
    new_node=c_node();
    new_node->data=value;
    new_node->address=NULL;

    struct Node * per;

    per=head;
    while (per->address!=NULL)
    {
        per=per->address;
    }
    per->address=new_node;
    
}

void insertMiddle(int value,int after){
    new_node=c_node();
    new_node->data=value;
    new_node->address=NULL;

    struct Node *bef;
    bef=head;
    while (bef->data!=after)
    {
        bef=bef->address;
    }
    new_node->address=bef->address;
    bef->address=new_node;
    
}

void deletFirst(){
    if (head==NULL){
        printf("List is empty.....\n");
    }
    else{
        struct Node *cur;
        cur=head;
        head=head->address;
        delete cur;
    }
}


void deletLast(){
    struct Node *pre=NULL,*cur=head;
    while (cur->address!=NULL)
    {
        pre=cur;
        cur=cur->address;
    }
    if(pre!=NULL){
        pre->address=NULL;
    }
    delete cur;
    
}


void deletAny(int x){
    if (head==NULL){
        printf("List is empty\n");
    }

    else{
        struct Node *cur=head,*pre=NULL;
        while(cur->data!=x){
            pre=cur;
            cur=cur->address;
        }
        if (pre!=NULL){
            pre->address=cur->address;
        }
        delete cur;
    }
}


void display(){
    struct Node *temp=head;
    while (temp->address!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->address;
    }
    printf("%d\n",temp->data);
    
}
int main(int argc, char const *argv[])
{
    insertFirst(10);
    insertLast(50);
    insertLast(60);
    insertLast(100);
    display();
    printf("\n \n");
    deletAny(50);
    deletAny(100);
    display();
    return 0;
}
