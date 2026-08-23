#include<iostream>
using namespace std;

class student{
    string name;
    string branch;
    int rollno;
    int marks;
public:
    student(string n, string b, int r, int m){
        cout<<"Parameterized Constructor Called"<<endl;
        name = n;
        branch = b;
        rollno = r;
        marks = m;
    }
    student(const student &s){
        cout<<"Copy Constructor Called"<<endl;
        name = s.name;
        branch = s.branch;
        rollno = s.rollno;
        marks = s.marks;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Branch: "<<branch<<endl;
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main()
{
    student s1("Kunal", "CSE", 63, 95);
    student s2 = s1;
    s1.display();
    s2.display();
    return 0;
}