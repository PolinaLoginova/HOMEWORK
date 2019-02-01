#include <iostream>
using namespace std;
int main() {
	int R, T = 1001, N = 0, L = 0, MAX = 0;
	do {
		cin >> R;
		if (R != 0) {
			N++;
		}
		if (R > T) {
			L = L + R - T;
		}
		else if (L > MAX) {
			MAX = L;
			L = 0;
		}
		T = R;
	} while (R != 0);
	cout << N << "  numbers have received ";
	cout << "Highest lift height is " << MAX;
	return 0;
}
