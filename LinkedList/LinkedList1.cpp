#include <iostream>
using namespace std;

class node{
public:
    int data;
    node *next = NULL;
};
class linkedlist{
public:
    int n;
    node *head = NULL;
    node *tail = NULL;
    node *temp = NULL;
    void creation(){
        cout << "Enter the number of nodes you want in your linked list: ";
        cin >> n;
        for (int i = 0; i < n; i++){
            node *newnode = new node;
            cout << "Enter the value of this new node created :";
            cin >> newnode->data;
            if (head == NULL){
                head = newnode;
                tail = newnode;
            }
            else{
                tail->next = newnode;
                tail = newnode;
            }
        }
    }
    void insertion(){
        cout << "which type of insertion do you want to do:\n1.Insertion at beggining\n2.Insertion at ending\n3.Insertion at a position in linked list\n";
        int choice;
        cin >> choice;

        node *newnode = new node;
        cout << "Enter the value of this node: ";
        cin >> newnode->data;
        if (choice == 1){
            if (head == NULL){
                head = newnode;
            }
            else{
                newnode->next = head;
                head = newnode;
            }
        }
        else if (choice == 2){
            tail->next=newnode;
            tail=newnode;
        }
        else if(choice==3){
            temp=head;
            int index;
            cout<<"At which index you want to insert new node: ";
            cin>>index;
            if(index>n || index<0){
                cout<<"Index out of range: ";
                return;
            }
            else{
                for(int i=0;i<index-1;i++)
                {
                    temp=temp->next;
                }
                newnode->next=temp->next;
                temp->next=newnode;
            }
        }
    }
    void print_data(){
        temp = head;
        while (temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
};
int main()
{
    linkedlist l;
    l.creation();
    l.insertion();
    l.print_data();

    return 0;
}