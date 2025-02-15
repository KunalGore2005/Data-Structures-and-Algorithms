#include <iostream>
using namespace std;

struct node
{
public:
    int val;
    node *next = NULL;
};
class stack
{
    node *top = NULL;
    node *temp = NULL;

public:
    void push_operation()
    {
        node *newnode = new node;
        cout << "Enter the value of this node: ";
        cin >> newnode->val;
        if (top == NULL)
        {
            top = newnode;
        }
        else
        {
            newnode->next = top;
            top = newnode;
        }
    }
    void pop_operation()
    {
        if(top==NULL)
        {
            cout<<"Empty stack"<<endl;
            return ;
        }
        temp=top;
        top=top->next;
        delete temp;
    }
    void top_operation()
    {
        cout<<top->val<<endl;
    }
    void printstack()
    {
        if(top==NULL)
        {
            cout<<"Empty stack"<<endl;
            return ;
        }
        temp=top;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    stack s;
    s.push_operation();
    s.push_operation();
    s.push_operation();
    s.push_operation();
    s.push_operation();
    s.push_operation();
    s.push_operation();
    s.push_operation();
    s.printstack();
    s.top_operation();
    s.pop_operation();
    s.printstack();
    return 0;
}