#include <iostream>
using namespace std;

struct node
{
public:
    node *next = NULL;
    node *pre = NULL;
    int val;
};
class doublylinkedlist
{
public:
    node *head = NULL;
    node *tail = NULL;
    node *temp = NULL;
    int n;
    void creation()
    {
        cout << "How many elements you want to have in douly linked list: ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            node *newnode = new node;
            cout << "Enter the value of node: ";
            cin >> newnode->val;
            if (head == NULL)
            {
                head = newnode;
                tail = newnode;
            }
            else
            {
                tail->next = newnode;
                newnode->pre = tail;
                tail = newnode;
            }
        }
    }
    void insertion()
    {
        cout << "How do you want to perform insertion: \n1. At beggining\n2.At ending\n3.After a specific node\n4.Before a specific node\n";
        int choice;
        cin >> choice;
        node *newnode = new node;
        cout << "Enter the value of this node: ";
        cin >> newnode->val;
        if (choice == 1)
        {
            head->pre = newnode;
            newnode->next = head;
            head = newnode;
        }
        else if (choice == 2)
        {
            tail->next = newnode;
            newnode->pre = tail;
            tail = newnode;
        }
        if (choice == 3)
        {
            temp = head;
            cout << "After which node do you want to insert new node: ";
            int pos;
            cin >> pos;
            for (int i = 1; i < pos; i++)
            {
                temp = temp->next;
            }
            temp->next->pre = newnode;
            newnode->next = temp->next;
            newnode->pre = temp;
            temp->next = newnode;
        }
        else if (choice == 4)
        {
            temp = tail;
            cout << "Before which node do you want to insert new node from last: ";
            int pos;
            cin >> pos;
            for (int i = n; i > pos; i--)
            {
                temp = temp->pre;
            }
            temp->next->pre = newnode;
            newnode->next = temp->next;
            newnode->pre = temp;
            temp->next=newnode;
        }
    }
    void printdata()
    {
        temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
        temp = tail;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->pre;
        }
    }
};
int main()
{
    doublylinkedlist dbl;
    dbl.creation();
    dbl.printdata();
    dbl.insertion();
    dbl.printdata();
    return 0;
}