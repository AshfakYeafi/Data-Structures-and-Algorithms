#include<iostream>
using namespace std;


void insert_sort(int arr[], int size) {
	for (int i = 1; i < size; i++) {
		int current = arr[i];
		int j = i - 1;
		while ((arr[j] > current) && (j >= 0)) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = current;
	}
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	insert_sort(arr, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}