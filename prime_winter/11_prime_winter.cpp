#include <iostream>
using namespace std;
int main() {
	int a;
	int b = 0;
	cin >> a;
	int *array = new int[a];
	for (int i = 0; i < a; i++) {
		cin >> array[i];
	}
	for (int i = 0; i < a; i++) {
		if (array[i] < 2 * array[i-1]) {
			b++;
		}
	}
	cout << b;
	return 0;
}
