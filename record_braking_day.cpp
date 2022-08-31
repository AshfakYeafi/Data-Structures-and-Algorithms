#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int count = 0;
	int ans = 1;
	int j = 0;
	int pd = arr[0];
	while (j < n) {
		if (arr[j] > pd && arr[j] > arr[j + 1]) {
			count++;
		}
		pd = max(pd, arr[j]);
		j++;
	}
	cout << count << endl;

}