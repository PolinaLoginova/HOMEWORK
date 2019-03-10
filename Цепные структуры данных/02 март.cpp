#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string data;
    Node* next = NULL;
};

class string_queue
{
    Node* head;
public:
    string_queue(): head(NULL){}

    void push (string x)
    {
        if(head = NULL)
        {
            head = new Node;
            head -> data = x;
        }
        Node* temp = head;
        while (temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = new Node;
        temp -> next -> data = x;
    }

    string pop ()
    {
        if(head = NULL)
        {
            cout << "Queue is empty";
            return 0;
        }
        Node* temp = head;
        head = head->next;
        string x = head-> data;
        delete temp;
        return x;
    }
    ~string_queue()
    {
        while(temp!=NULL)
        {
            Node* temp = head;
            head = head -> next;
            delete temp;

        }
    }
};

int main()
{
  string_queue A;
	A.push("Peace is a lie, there is only passion.");
	A.push("Through passion, I gain strength.");
	A.push("Through strength, I gain power.");
	A.push("Through power, I gain victory.");
	A.push("Through victory, my chains are broken.");
	A.push("The Force shall free me.");
	cout << A.pop() << endl;
	cout << A.pop() << endl;
	cout << A.pop() << endl;
	cout << A.pop() << endl;
	cout << A.pop() << endl;
	cout << A.pop() << endl;

	return 0;

}
