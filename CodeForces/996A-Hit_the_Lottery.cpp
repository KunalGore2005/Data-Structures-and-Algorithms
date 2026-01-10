#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int res=0;
    res+=n/100;
    n=n%100;
    res+=n/20;
    n=n%20;
    res+=n/10;
    n=n%10;
    res+=n/5;
    n=n%5;
    res+=n/1;
    cout<<res<<endl;
    return 0;
}