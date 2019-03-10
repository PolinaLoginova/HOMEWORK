#include <bits.h>
#include <iostream>
#include<stack>
using namespace std;
class stack_with_max 
{
	stack <int> s;
	int MAX;
public:
	void getMAX()
	{
		if (s.empty())
			cout << "Stack is empty\n";
		else
			cout << "Maximum Element in the stack is: " << MAX << endl;
	}
	void pop()	
	{
		if (s.empty()) 
		{
			cout << "Stack is empty\n";
			return;
		}
		cout << "Top Most Element Removed: ";
		int t = s.top();
		s.pop();
		if (t > MAX) 
		{
			cout << MAX << endl;
			MAX = 2 * MAX - t;
		}

		else
			cout << t << endl;
	}
	void push(int x)	
	{
		if (s.empty()) 
		{
			MAX = x;
			s.push(x);
			cout << "Number Inserted: " << x << endl;
			return;
		}
		if (x > MAX)
		{
			s.push(2 * x - MAX);
			MAX = x;
		}
		else
		s.push(x);
		cout << "Number Inserted: " << x << endl;
	}
};
int main() {
	stack_with_max A;
	A.push(7);
	A.push(12);
	A.getMAX();
	A.push(10);
	A.push(28);
	A.getMAX();
	A.pop();
	A.getMAX();
	return 0;
}
