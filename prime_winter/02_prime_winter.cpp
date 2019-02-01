#include <iostream>
using namespace std;
int main() {
	int X, Y, Z;
	cin >> X >> Y >> Z;
	long long *d = new long long[Y + 1];
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
		else if ((i % 2 != 0) && (i % 10 == 0)) {
			d[i] = d[i - 1] + d[(i - 1) / 2] + d[i / 10];
		}
		else if ((i % 2 != 0) && (i % 10 != 0)) {
			d[i] = d[i - 1] + d[(i - 1) / 2];
		}
		else if ((i % 2 == 0) && (i % 10 == 0)) {
			d[i] = d[i - 1] + d[i / 2] + d[i / 10];
		}
		else if ((i % 2 == 0) && (i % 10 != 0)) {
			d[i] = d[i - 1] + d[i / 2];
		}
	}
	cout << d[Y];
	return 0;
}
