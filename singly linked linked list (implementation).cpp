// Implementation of singly linked linked list by @Ashfak_Yeafi
// for theory
//https://www.educative.io/edpresso/what-is-a-singly-linked-list
//https://images.app.goo.gl/EN8PQ2BjYYxUQ7FE8


#include<stdio.h>
#include<stdlib.h>    //Libary for call malloc()

struct Node{        //creating user defined data type
    int data;
    struct Node *address;
};

struct Node *head=0,*temp,*new_node;        //head--->address of 1st element;temp--->for tracking the data structure;new_node--->storing newly created node

int counter=0;            // for tracking the number of elements

struct Node* c_node(){      // function for dynamicly created node
    counter++;                    // incress counter
    return (struct Node*) malloc(sizeof(struct Node));  // return new created node
}

void append(int data){      //function for add element at end
    new_node=c_node();      //create a new node
    if(new_node==NULL){     //cheak if memory is valid
        printf("Cant not allocate memory");
    }
    else{                   // if memory is valid
        new_node->data=data;    //assing data to new_node
        new_node->address=0;    //assing new_node address variable to 0(by default we asume this will be last node.If this is not the last node we will change the value letter)
        if(head==0){        //This condition is valid for only 1st element
            head=new_node;
            temp=head;
        }
        else{
            temp->address=new_node;        // link next node's address to the periveous node
            temp=new_node;          //shift temp veriable to next node
        }
    }   
}

void insert(int pos,int data){      //this functin is for inserting value at n th position
    if (pos==0){                //for 1st position
        new_node=c_node();
        new_node->data=data;
        new_node->address=head;
        head=new_node;
    }
    else if (pos==-1 || pos==counter)           //for last position
    {
        temp=head;
        while(temp->address!=0){
            temp=temp->address;
        }
        new_node=c_node();
        new_node->data=data;
        new_node->address=0;
        temp->address=new_node;
    }
    else{                       //for any position less than total position
        if(pos>counter){          // cheak if the position is valid
            printf("Invalid Position\n");
        }
        else{int i=1;
            temp=head;
            while (i<pos)
            {
                temp=temp->address;
                i++;
            }
            
            new_node=c_node();
            new_node->data=data;
            new_node->address=temp->address;
            temp->address=new_node;
        }
    }
    
}

void display(){         //this function will display the full data structure
    temp=head;
    while(temp!=0){
        printf("%d\n",temp->data);
        temp=temp->address;
    }
    printf("Total element: %d\n",counter);
}

int sum(){          // this function will return the sumition of the list
    temp=head;
    int i,res=0;
    while (temp!=0)
    {
        res+=temp->data;
        temp=temp->address;
    }
    return res;
}

int min(){      // return the minimun value of the list
    temp=head;
    int i,res=head->data;
    while (temp!=0)
    {
        if(temp->data<res) res=temp->data;
        temp=temp->address;
    }
    return res;
}

int max(){      //return the maximum value of the list
    temp=head;
    int i,res=head->data;
    while (temp!=0)
    {
        if(temp->data>res) res=temp->data;
        temp=temp->address;
    }
    return res;
}

int main(){  // main function
for(int i=1;i<=10;i++)append(i); // append 1 to 10
insert(0,20); // insert 20 at 1st position
insert(-1,100); //insert 100 at last position
insert(4,69);//insert 69 at 5 th position
display();     //display the full list
printf("Minimum is :%d\n",min());   //print the minimum value
printf("Maximum is :%d\n",max());   //print the maximum value
printf("Summition is :%d\n",sum()); //print the sumition of the list
}
