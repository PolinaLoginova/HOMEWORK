#include <iostream>
using namespace std;
int main() {
	int N, t, A, B, X, Y, Y1, Y2;
	cin >> N;
	cin >> t;
	X = 0;
	Y = t;
	for (int i = 1; i <= N;i++) {
		cin >> A >> B;
		X = X + A;
		Y1 = Y + B;
		Y2 = X + t;
		if (Y1 < Y2) {
			Y = Y1;
		}
		else {
			Y = Y2;
		}
	}
	cout << Y;
	return 0;
}
