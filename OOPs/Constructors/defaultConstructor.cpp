#include<iostream>
using namespace std;

class Student{
    string name;
    int rollno;
public:
    Student(){
        cout<<"Default Constructor Called"<<endl;
    }
    void getinfo(string n, int r){
        name = n;
        rollno = r;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollno<<endl;
    }
};
int main()
{
    Student s1;
    s1.getinfo("Kunal", 63);
    s1.display();
    return 0;
}