#include <iostream>
using namespace std;
int main() {
	int MAX = 100, N, D, K, imax;
	int remainder;
	int *a = new int[MAX - 1];
	for (int i = 0; i < MAX - 1; i++) {
		a[i] = 0;
	}
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> D >> K;
		remainder = K % D;
		if (remainder > 0) {
			a[remainder] = a[remainder] + 1;
		}
	}
	imax = 1;
	for (int i = 1; i < MAX - 1; i++) {
		if (a[i] >= a[imax]) {
			imax = i;
		}
	}
	if (a[imax] == 0) {
		imax = 0;
	}
	cout << imax;
	return 0;
}
