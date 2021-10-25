#include<iostream>
using namespace std;

void selection_sort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		int index_min = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[index_min]) {
				index_min = j;
			}
		}
		if (index_min != i) {
			int temp = arr[i];
			arr[i] = arr[index_min];
			arr[index_min] = temp;
		}
	}
}



int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	selection_sort(arr, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}