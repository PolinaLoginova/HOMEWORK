#include <iostream>
#include <string>
using namespace std;

struct Node
{
    char data;
    Node* prev = NULL;
    Node* next = NULL;
};

class char_deque
{
    Node* head;
    Node* tail;

public:
    char_deque(): head(NULL){}
    void push_front (char x)
    {
        if(head == NULL)
        {
            head = new Node;
            tail = head;
            head -> data = x;
        }
        head -> prev = new Node;
        head -> prev -> next = head;
        head = head -> prev;
        head -> data = x;
    }
    void push_back(char x)
    {
      if(head==NULL)
      {
          head = new Node;
          tail = head;
          head -> data = x;

      tail -> next = new Node;
      tail -> next -> prev = tail;
      tail = tail -> next;
      tail -> data = x;
    }
    }

    char pop_front()
    {
        if(head == NULL)
        {
            cout << "deque is empy";
            return 0;
        }
        Node* temp = head;
        head = head -> next;
        char x = temp -> data;
        delete temp;
        return x;
        }

    char pop_back()
    {
        if(head = NULL)
        {
            cout << "deque is empy";
            return 0;
        }
        Node* temp = tail;
        tail = tail -> prev;
        char x = temp -> data;
        delete temp;
        return x;
    }

    ~char_deque()
    {
        while (head!=NULL)
        {
            Node* temp = head;
            head = head-> next;
            delete temp;
        }
    }
};


int main()
{
	char_deque A;
	A.push_front('m');
	A.push_front('d');
	A.push_front('c');
	cout << A.pop_front() << "\n";
	cout << A.pop_front() << "\n";
	A.push_back('b');
	A.push_back('z');
	cout << A.pop_back() << "\n";
	cout << A.pop_back() << "\n";
	return 0;

};
