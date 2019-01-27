#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum = 1;
    cin >> n;
    int *array = new int (n);
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        array[i] = a;
        }
    for (int i = 1; i <= n; i++)
    {
        if(array[i]%2!=0 && array[i]%3==0)
        {
            sum *= array[i];
        }
        else i++;
    }
    cout << sum;


















    delete [] array;

    return 0;
}
