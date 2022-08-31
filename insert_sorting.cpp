#include<stdio.h>
void insert_sort(int A[],int n){
    int i,j,item;
    for(i=1;i<n;i++){
        j=i-1;
        item=A[i];
        while(j>=0 && A[j]>item){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=item;
    }
}

int main(){
    int a[10]={4,5,7,8,1,2,5,9,1,4};
    insert_sort(a,10);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}
