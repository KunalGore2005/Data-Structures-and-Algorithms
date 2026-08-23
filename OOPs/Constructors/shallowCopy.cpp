#include<iostream>
using namespace std;

class Student {
public:
    int* marks;

    Student(int m) {
        marks = new int(m);
    }
    void display() {
        cout << "Marks: " << *marks << endl;
    }
};

int main()
{
    //In shallow copy, both objects will point to the same memory location for marks. So, if we change the marks of one object, it will affect the other object as well.
    Student s1(90);
    Student s2 = s1;

    s1.display();
    s2.display();

    *s2.marks = 65;

    s1.display();
    s2.display();

    return 0;
}