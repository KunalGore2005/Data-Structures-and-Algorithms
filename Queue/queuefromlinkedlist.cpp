#include <iostream>
using namespace std;

struct node
{
    int val;
    node *next = NULL;
};
class queue
{
public:
    node *front = NULL;
    node *rear = NULL;
    void enqueue(int x)
    {
        node *newnode = new node;
        newnode->val = x;
        if (front == NULL)
        {
            front = newnode;
            rear = newnode;
        }
        else
        {
            rear->next = newnode;
            rear = newnode;
        }
    }
    void dequeue()
    {
        node *temp = front;
        front = front->next;
        delete temp;
    }
    void print()
    {
        node *temp = front;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp=temp->next;
        }
        cout << endl;
    }
};
int main()
{
    queue q;
    cout<<"How many nodes you want to enqueue at a time: ";
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the value of new element in queue: ";
        cin >> val;
        q.enqueue(val);
    }
    q.dequeue();
    q.print();

    return 0;
}