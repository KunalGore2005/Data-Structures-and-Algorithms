#include<iostream>
using namespace std;

class Student {
public:
    int* marks;

    Student(int m) {
        marks = new int(m);
    }

    Student(const Student& other) {
        marks = new int(*other.marks);
    }
    void display() {
        cout << "Marks: " << *marks << endl;
    }
};

int main()
{
    // In deep copy, each object will have its own copy of the marks. So, if we change the marks of one object, it will not affect the other object.
    Student s1(80);
    Student s2 = s1;
    s1.display();
    s2.display();

    *s2.marks = 100;

    s1.display();
    s2.display();
    return 0;
}