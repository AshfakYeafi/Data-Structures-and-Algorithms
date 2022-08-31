#include<iostream>
#include<climits>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int max_sum = INT_MIN;
	//	get subarray
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			int sum = 0;
			for (int k = i; k <= j; k++) {
				sum += arr[k];
				// cout << arr[k] << " ";
			}
			max_sum = max(max_sum, sum);
			// cout << "\n";
		}
	}
	cout << max_sum << endl;
}