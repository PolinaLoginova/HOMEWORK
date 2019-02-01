#include <iostream>
#include <cmath>
using namespace std;
bool sqr(long long n) {
	long long squareRootN = (long long)(sqrt((double)n) + 0.5);
	return squareRootN * squareRootN == n;
}
int main() {
	int X, Y, Z;
	cin >> X >> Y >> Z;
	bool *d = new bool[Y + 1];
	for (long long i = 0; i <= Y; i++) {
		if (i == X) {
			d[i] = 1;
		}
		else if (i <= X) {
			d[i] = 0;
		}
		else if (i == Z) {
			d[i] = 0;
		}
		else if ((sqr(i) == true) && (i % 3 == 0) && (i % 10 == 2)) {
			d[i] = d[i - 5] || d[(int)sqrt(i)] || d[i / 3] || d[(i - 2) / 10];
		}
		else if ((sqr(i) == true) && (i % 3 == 0) && (i % 10 != 2)) {
			d[i] = d[i - 5] || d[(int)sqrt(i)] || d[i / 3];
		}
		else if ((sqr(i) == true) && (i % 3 != 0) && (i % 10 == 2)) {
			d[i] = d[i - 5] || d[(int)sqrt(i)] || d[(i - 2) / 10];
		}
		else if ((sqr(i) == true) && (i % 3 != 0) && (i % 10 != 2)) {
			d[i] = d[i - 5] || d[(int)sqrt(i)];
		}
		else if ((sqr(i) == false) && (i % 3 != 0) && (i % 10 != 2)) {
			d[i] = d[i - 5];
		}
		else if ((sqr(i) == false) && (i % 3 == 0) && (i % 10 == 2)) {
			d[i] = d[i - 5] || d[i / 3] || d[(i - 2) / 10];
		}
		else if ((sqr(i) == false) && (i % 3 == 0) && (i % 10 != 2)) {
			d[i] = d[i - 5] || d[i / 3];
		}
		else if ((sqr(i) == false) && (i % 3 != 0) && (i % 10 == 2)) {
			d[i] = d[i - 5] || d[(i - 2) / 10];
		}

	}
	if (d[Y] == 1) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
