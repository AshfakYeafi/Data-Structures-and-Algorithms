#include<stdio.h>
#include<stdlib.h>    //libary for malloc()

struct node{         // User defined datatype for creatin node
    int data;
    struct node* address;       //address variable will store the next node address
};

int main(){

    struct node *head,*new_node,*temp;      //head variable will store the address of 1st node,new_node will store newely created nodes's address,temp will be used for tracking preveous node's address
    head=0;
    int c=1;
    while(1){                           // use while loop for testing data_structure implementation
        printf("Enter choice(0,1): ");
        scanf("%d",&c);
        if(c==0)break;
        new_node=(struct node*) malloc(sizeof(struct node));    //create new dynamic memory for every new node
        printf("Enter data: ");         //take node's data
        scanf("%d",&new_node->data);    // in structure if we want to pass pointer we need to use -> operator.(&new_node->data) will assing data in structure node
        new_node->address=0;            // set new node address to 0. we will change the address letter if needed
        if(head==0){                    // this condition will run for only 1st time
            head=new_node;              //assing 1st node address to head variable
            temp=new_node;              // assing 1st node address to temp variable
        }
        else{                           //this condition will run for every time except for 1st node
            temp->address=new_node;     //assing previous node address variable to next node address
            temp=new_node;              //shift temp to newly created node.
        }
    }
    temp=head;
    while (temp!=0)                     //this part is used for print/access the linked list data
    {
        printf("%d\n",temp->data);
        temp=temp->address;
    }
    
}
