#include<iostream>
using namespace std;

class Employee{
    string name;
    int id;
    double salary;
    static int employeeCount;

    public:
    Employee(string n,int i,double s){
        name=n;
        id=i;
        salary=s;
        employeeCount++;
    }
    ~Employee(){
        employeeCount--;
        cout<<"destructor called\n";
    }

    static int getEmployeeCount(){
        return employeeCount;
    }
};

int Employee::employeeCount=0;

int main(){

    Employee e1("Kunal",01,1200000);
    Employee e2("Chandu",02,12424);

    cout<<"employeeCount = "<<Employee::getEmployeeCount()<<endl;

    {
        Employee e3("Lakhan",03,124235);
        cout<<"employeeCount = "<<Employee::getEmployeeCount()<<endl;
    }
    Employee e4("gourav",04,124235);
    cout<<"employeeCount = "<<Employee::getEmployeeCount()<<endl;

    return 0;
}