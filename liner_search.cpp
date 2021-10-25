/*
Linier search will search items one by one linierly
*/


#include<iostream>
using namespace std;

int linier_search(int arr[], int size, int key) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			return i;
		}
	}
	return -1;
}

int main() {
	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int key;
	cin >> key;
	cout << linier_search(arr, n, key);
}

