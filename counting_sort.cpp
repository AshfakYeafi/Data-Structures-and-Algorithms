#include<bits/stdc++.h>
using namespace std;

void myCSort(int array[] , int n) {
    int k = array[0];
    for (int i = 0; i < n; i++) {
        k = max(array[i], k);
        cout << "ok" << endl;
    }

    int myC[k+1] = {0};

    for (int i = 0; i < n; i++) {
        myC[array[i]]++;
    }

    for (int i = 1; i <= k; i++) {
        myC[i] += myC[i - 1];
    }
    int out_put [n] ;

    for (int i = n - 1; i = 0 ; i--)
    {
        out_put[-- myC[array[i]]] = array[i];

    }

    for (int i = 0; i < n; i++) {
        cout << out_put[i] << endl;
    }

}

int main() {
    int arr[10] = {1, 3, 5, 3, 2, 6, 7, 8, 9, 7};
    myCSort(arr, 10);

}
