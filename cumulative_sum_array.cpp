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
	int current_sum[n + 1];
	current_sum[0] = 0;
	for (int i = 1; i <= n; i++) {
		current_sum[i] = current_sum[i - 1] + arr[i - 1];
	}
	int max_sum = INT_MIN;
	for (int i = 1; i <= n; i++) {
		int sum = 0;
		for (int j = 0; j < i; j++) {
			sum = current_sum[i] - current_sum[j];
			max_sum = max(max_sum, sum);
		}
	}
	cout << max_sum << endl;
}