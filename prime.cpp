#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	bool flag = 1;
	cin >> n;
	for (int i = 2; i < sqrt(n); i++) {
		if (n % i == 0) {
			cout << "Not Prime";
			flag = 0;
			break;
		}
	}
	if (flag == 1) {
		cout << "Prime";
	}
}