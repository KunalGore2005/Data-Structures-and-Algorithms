#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=min(a,min(b,c));
    int y=max(a,max(b,c));
    int z=a+b+c-x-y;
    cout<<(y-z)+(z-x);
    return 0;
}