#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int mx = arr[0];
	for (int i = 0; i < n ; i++) {
		cout << mx << " ";
		if (arr[i + 1] > arr[i]) {
			mx = arr[i + 1];
		}
	}


}