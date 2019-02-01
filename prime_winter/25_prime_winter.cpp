#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, s = 0, j;
	cin >> n;
	int* A = new int[n];
	for (int i = 0; i < n; i++)
		cin >> A[i];
	for (int i = 0; i < n - 4; i++)
	{
		j = i + 4;
		while (j < n)
		{
			if ((A[i] * A[j]) % 38 == 0)
				s++;
				j++;
		};
	};
	cout << s;
	return 0;
}
