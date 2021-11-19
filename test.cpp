#include<iostream>
using namespace std;


class Demo
{
private:

	int test_fun(int a, int b) {
		return a + b;
	}
public:

	int aaaa(int a, int b) {
		int c = test_fun(a, b);
		return c;
	}

};

int main() {
	Demo test;
	int ans = test.aaaa(2, 3);
	cout << ans << endl;

}