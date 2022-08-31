#include<iostream>
#define N 5
using namespace std;

int count=0,st_1[N],st_2[N],top_1=-1,top_2=-1;

void push_1(int a){
    if (top_1==N-1){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        top_1++;
        st_1[top_1]=a;
    }
}
int pop_1(){
    if(top_1==-1){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        return(st_1[top_1--]);
    }
}

void push_2(int a){
    if (top_1==N-1){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        top_2++;
        st_2[top_2]=a;
    }
}
int pop_2(){
    if(top_1==-1){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        return(st_2[top_2--]);
    }
}


void enqueue(int a){
    push_1(a);
    count++;
}

void dequeue(){
    for(int i=0;i<count;i++){
        push_2(pop_1());
    }
    pop_2();
    count--;
    for(int i=0;i<count;i++){
        push_1(pop_2());
    }
}

void display(){
    for(int i=0;i<count;i++){
        cout<<
    }
}










int main(){


}