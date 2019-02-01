#include <iostream>
using namespace std;
int main() {
	int n, s = 0;
	cin >> n;
	int* A = new int[n];
	for (int i = 0; i < n; i++)
		cin >> A[i];
	for (int i = 0; i < n - 1; i++) {
		for (int j = i; j < n; j++) {
			if ((A[i] + A[j]) % 9 == 0) {
				s++;
			}
		}
	}
	cout << s;
	return 0;
}
