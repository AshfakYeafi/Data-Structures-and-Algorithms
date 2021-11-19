/*
input
n=5 , m=6
1 5 7 9 10 11
6 10 12 13 20 21
9 25 29 30 32 41
15 55 59 63 68 70
40 70 79 81 195 105

output
1 5 7 9 10 11 21 41 70 105 195 81 79 70 40 15 9 6 10 12 13 20 32 68 63 59 55 25 29 30 29
*/





#include<iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int arr[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	// logic for sprial order
	int row_start = 0, row_end = n - 1, column_start = 0, column_end = m - 1;

	while ((row_start <= row_end) && (column_start <= column_end)) {

		//for printing start column to end column
		for (int col = column_start; col <= column_end; col++) {
			cout << arr[row_start][col] << " ";
		}
		row_start++;

		//for printing start row to end row
		for (int row = row_start; row <= row_end; row++) {
			cout << arr[row][column_end] << " ";
		}
		column_end--;

		//for printing end column to start column
		for (int col = column_end; col >= column_start; col--) {
			cout << arr[row_end][col] << " ";
		}
		row_end--;

		//for printing end row to start row
		for (int row = row_end; row >= row_start; row--) {
			cout << arr[row][column_start] << " ";
		}
		column_start++;
	}
}