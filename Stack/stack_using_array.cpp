#include<iostream>
using namespace std;

class Stack{
    private:
        int *arr;
        int top;
        int capacity;
    public:
        Stack(int size){
            arr=new int[size];
            capacity=size;
            top=-1;
        }
        ~Stack(){
            delete[] arr;
        }
        void push(int x){
            if(top==capacity-1){
                cout<<"Stack Overflow"<<endl;
                return;
            }
            arr[++top]=x;
        }
        int pop(){
            if(top==-1){
                cout<<"Stack Underflow"<<endl;
                return -1;
            }
            return arr[top + 1],
            top--;
        }
        int peek(){
            if(top==-1){
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            return arr[top];
        }
        bool isEmpty(){
            return top==-1;
        }
        int size(){
            return top+1;
        }
        void printStack(){
            if(top==-1){
                cout<<"Stack is empty"<<endl;
                return;
            }
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};
int main()
{
    int n;
    cout<<"Enter the size of stack: ";
    cin>>n;
    int choice;
    Stack st(n);
    do{
        cout<<"1. Push\n2. Pop\n3. Top\n4. Print Stack\n5. IsEmpty\n6. Size\n7. Exit\nEnter your choice: ";
        cin>>choice;
        if(choice==1){
            cout<<"Enter the element to push: ";
            int x;
            cin>>x;
            st.push(x);
        }
        else if(choice==2){
            st.pop();
        }
        else if(choice==3){
            cout<<"Top element is: "<<st.peek()<<endl;
        }
        else if(choice==4){
            st.printStack();
        }
        else if(choice==5){
            cout<<st.isEmpty()<<endl;
        }
        else if(choice==6){
            cout<<"Size of stack: "<<st.size()<<endl;
        }
        else if(choice==7){
            cout<<"Exiting..."<<endl;
        }    
        else{
            cout<<"Invalid choice"<<endl;
        }
    }while(choice!=7);
    return 0;
}