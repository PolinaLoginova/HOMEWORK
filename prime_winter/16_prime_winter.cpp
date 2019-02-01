#include <iostream>
using namespace std;
int main() {
	int max = 1001;
	int S = 6;
	int indication, MinE, MinA, MinM, mult;
	int N;
	cin >> N;
	int *array = new int[S];
	for (int i = 0; i < S; i++) {
		cin >> array[i];
	}
	MinA = max;
	MinE = max;
	MinM = max * max;
	for (int i = S; i < N; i++) {
		cin >> indication;
		if (array[0] < MinA) {
			MinA = array[1];
		}
		if ((array[0] % 2 == 0) && (array[0] < MinE)) {
			MinE = array[0];
		}
		if (indication % 2 == 0) {
			mult = indication * MinA;
		}
		else if (MinE < max) {
			mult = indication * MinE;
		}
		else {
			mult = max * max;
		}
		if (mult < MinM) {
			MinM = mult;
			for (int j = 0; j < S - 1; j++) {
				array[j] = array[j + 1];
				array[S] = indication;
			}
		}
	}
	if (MinM == max * max) {
		MinM = -1;
	}
	cout << MinM;
	return 0;
}
