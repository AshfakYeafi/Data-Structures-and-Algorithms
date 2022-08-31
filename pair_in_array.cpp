#include<iostream>
#include<climits>
using namespace std;

bool pair_array(int arr[], int n, int k) {
	int high = n - 1;
	int low = 0;

	while (high > low) {
		if (arr[low] + arr[high] == k) {
			return true;
		}
		else if (arr[low] + arr[high] > k) {
			high--;
		}
		else {
			low++;
		}
	}

	return false;
}


int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int k;
	cin >> k;
	pair_array(arr, n, k) ? cout << "Yes " : cout << "NO";
}