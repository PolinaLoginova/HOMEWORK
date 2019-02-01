#include <iostream>
using namespace std;
int main() {
	int N, X, MAX, length, k;
	int *d = new int[20];
	for (int i = 0; i < 20; i++) {
		d[i] = 0;
	}
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> X;
		k = 0;
		while (X > 0) {
			k++;
			X /= 10;
		}
		d[k]++;
	}
	MAX = 0;
	for (int i = 1; i < 20; i++) {
		if (d[i] >= MAX) {
			MAX = d[i];
			length = i;
		}
	}
	cout << length << " " << MAX;
	return 0;
}
