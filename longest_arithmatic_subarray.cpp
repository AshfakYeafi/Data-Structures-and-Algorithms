#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int count = 2;
	int pd = arr[1] - arr[0];
	int ans = 2;
	int j = 2;
	while (j < n) {
		if (arr[j] - arr[j - 1] == pd) {
			count++;
		}
		else {
			count = 2;
			pd = arr[j] - arr[j - 1];
		}
		ans = max(ans, count);
		j++;

	}
	cout << ans << endl;

}