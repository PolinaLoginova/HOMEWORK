#include <iostream>

using namespace std;

struct Node
{
    double data;
    Node* next = NULL;
    Node* prev = NULL;
};

class double_stack
{
    Node* head;
 public:
     double_stack(): head(NULL){}

     void push(double x)
     {
         Node* temp = new Node;
         temp -> data = x;
         temp -> next = head;
         head = temp;
     }

     double pop()
     {
         if(head == NULL)
         {
             cout << "stack is empty";
             return 0;
         }
        Node* temp = head;
        head = head-> next;
        double x = temp -> data;
        delete temp;
        return x;
     }
    ~double_stack()
    {
    while (head!=NULL)
        {
            Node* temp = head;
            head = head -> next;
            delete temp;
        }
    }

};


int main()
{
    double_stack A;
    A.push(6367);
    A.push(6211.4);
    A.push(8373823);
    cout << A.pop() << endl;
    cout << A.pop() << endl;
    A.push(4.20);
    A.push(1488);
    cout << A.pop() << endl;

}
