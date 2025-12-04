#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==b && a==c && a==d)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}