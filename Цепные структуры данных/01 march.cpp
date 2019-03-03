#include <iostream>
using namespace std;
struct Node {
	double data;
	Node* next = NULL;
	Node* prev = NULL;
};
class double_stack {
	Node* head;
public:
	double_stack() :head(NULL) {}
	void push(double x) {
		Node* temp = new Node;
		temp->data = x;
		temp->next = head;
		head = temp;
	}
	double pop() {
		if (head == NULL) {
			cout << "Stack is empty";
			return 0;
		}
		Node* temp = head;
		head = head->next;
		double x = temp->data;
		delete temp;
		return x;
	}
	~double_stack() {
		while (head != NULL) {
			Node* temp = head;
			head = head->next;
			delete temp;
		}
	}
};
int main() {
	double_stack A;
	A.push(223234);
	A.push(39383.4);
	A.push(65.7);
	A.push(6345.8);
	A.push(87473.9);
	A.push(8736.9);
	cout << A.pop() << "\n";
	cout << A.pop() << "\n";
	cout << A.pop() << "\n";
	A.push(563.8);
	A.push(8.31);
	A.push(2.89);
	A.push(3876.98);
	cout << A.pop() << "\n";
	cout << A.pop() << "\n";
	return 0;
}
