/*
Armstrong number is a number that is equal to the sum of cubes of its digits.
For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
*/

#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n, temp, chek = 0;
	cin >> n;
	temp = n;
	while (n != 0) {
		chek = chek + pow(n % 10, 3);
		n = n / 10;
	}
	(chek == temp) ? cout << "Armstrong Number" : cout << "Not a Armstrong Number";
}