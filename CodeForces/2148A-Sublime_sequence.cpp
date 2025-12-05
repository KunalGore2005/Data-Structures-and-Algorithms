#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,n;
        cin>>x>>n;
        if(n%2==0)cout<<0;
        else cout<<x;
        cout<<endl;
    }
    return 0;
}