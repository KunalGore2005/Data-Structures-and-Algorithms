#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int m=max(max(a,b),max(c,d));
    int p=m-a;
    int q=m-b;
    int r=m-c;
    int s=m-d;
    if(p!=0)cout<<p<<" ";
    if(q!=0)cout<<q<<" ";
    if(r!=0)cout<<r<<" ";
    if(s!=0)cout<<s<<" ";
    return 0;
}