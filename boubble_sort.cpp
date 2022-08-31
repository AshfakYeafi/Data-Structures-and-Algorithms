#include<iostream>
using namespace std;

void bubble_sort(int arr[], int size) {
	int counter = 1;
	while (size > counter) {
		for (int i = 0; i < size - counter; i++) {
			if (arr[i] > arr[i + 1]) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
		counter++;
	}
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	bubble_sort(arr, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}