#include<iostream>
using namespace std;

int sum(int n)
{
    if(n==1)return 1;
    return n+sum(n-1);
}
int main()
{
    cout<<"Enter the number till you want to add from 0: ";
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}