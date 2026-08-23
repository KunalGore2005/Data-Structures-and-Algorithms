#include<iostream>
using namespace std;

class student{
    string name;
    int rollno;
    int marks;
    public:
    student(string n, int r, int m){
        cout<<"Parameterized Constructor Called"<<endl;
        name = n;
        rollno = r;
        marks = m;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
    ~student(){
        cout<<"Destructor Called"<<endl;
    }
};

int main()
{
    student s1("Kunal", 63, 95);
    s1.display();

    return 0;
}