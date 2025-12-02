#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mi=min(a,min(b,c));
    int ma=max(a,max(b,c));
    if(ma-mi>=10)cout<<"check again";
    else{
        int r;
        if(a!=mi && a!=ma)r=a;
        else if(b!=mi && b!=ma)r=b;
        else r=c;
        cout<<"final "<<r;
    }
    return 0;
}