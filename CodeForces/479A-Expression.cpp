#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int  p = a + b + c;
    int  q = a * b * c;
    int  r = a + b * c;
    int  s = a * b + c;
    int  t = (a + b) * c;
    int  u = a * (b + c);
    
    cout<<max(p,max(q,max(r,max(s,max(t,u)))))<<endl;
    return 0;
}