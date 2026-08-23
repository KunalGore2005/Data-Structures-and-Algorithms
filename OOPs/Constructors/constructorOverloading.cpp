#include<iostream>
using namespace std;

class student{
    string name;
    int rollno;
    int marks;
    public:
    student(){
        name = "Unknown";
        rollno = 0;
        marks = 0;
    }
    student(string n, int r, int m){
        name = n;
        rollno = r;
        marks = m;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
    ~student(){}
};
int main()
{
    student s1;
    student s2("Kunal", 63, 95);

    s1.display();
    s2.display();

    return 0;
}