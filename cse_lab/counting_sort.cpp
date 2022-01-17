#include<iostream>
using namespace std;

void c_sort(int arr[],int n){
    int k=arr[0];
    for(int i=0;i<n;i++){
        k=max(arr[i],k);
    }

    int count[k+1]={0};

    for(int i=0;i<n;i++){
        ++count[arr[i]];
    }
    for(int i=1;i<=k;i++){
        count[i]=count[i]+count[i-1];
    }

    int out_arr[n];

    for(int i=n-1;i>=0;i--){
        out_arr[--count[arr[i]]]=arr[i];
    }
    for(int i=n-1;i>=0;i--){
        arr[i]=out_arr[n-i-1];
    }
}

int main(){

    int arr[6]={45,4,5,7,1,2};

    int n=sizeof(arr)/sizeof(arr[0]);
    
    c_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

}