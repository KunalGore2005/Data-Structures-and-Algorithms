#include<iostream>
using namespace std;

int sumofdigits(int n)
{
    if(n==0)return 1;
    int x=n%10;
    return x+sumofdigits(n/10);
}
int main()
{
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    cout<<sumofdigits(n);
    return 0;
}