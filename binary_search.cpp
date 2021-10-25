#include<iostream>
using namespace std;


int binarySearch(int arr[], int size, int key) {
	int start = 0;
	int end = size - 1;
	while (end >= start) {
		int mid = (end + start) / 2;
		if (arr[mid] == key) {
			return mid;
		}
		else if (arr[mid] > key) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
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
	cout << binarySearch(arr, n, key) << endl;
}
