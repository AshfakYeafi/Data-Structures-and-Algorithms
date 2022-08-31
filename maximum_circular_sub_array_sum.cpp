#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[], int n) {
	int current_sum = 0;
	int maxSum = INT_MIN;
	for (int i = 0; i < n; i++) {
		current_sum += arr[i];
		if (current_sum < 0) {
			current_sum = 0;
		}
		maxSum = max(maxSum, current_sum);
	}

	return maxSum;
}



int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int warp_sum;
	int non_warp_sum;

	non_warp_sum = kadane(arr, n);

	int totalSum = 0;
	for (int i = 0; i < n; i++) {
		totalSum += arr[i];
		arr[i] = -arr[i];
	}
	warp_sum = totalSum + kadane(arr, n);
	cout << max(warp_sum, non_warp_sum) << endl;

}