#include <iostream>
using namespace std;
int main() {
	int result = 2147483646;
	int N, A, B, MAX, MIN, sum = 0, MAX_MIN;
	MAX_MIN = result + 1;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A >> B;
		if (A > B) {
			MAX = A;
			MIN = B;
		}
		else {
			MAX = B;
			MIN = A;
		}
		sum += MAX;
		if (((MAX - MIN) % 3 != 0) && (MAX - MIN < MAX_MIN)) {
			MAX_MIN = MAX - MIN;
		}
	}
	if (sum % 3 == 0) {
		if (MAX_MIN > result) {
			sum = 0;
		}
		else {
			sum -= MAX_MIN;
		}
	}
	cout << sum;
	return 0;
}
