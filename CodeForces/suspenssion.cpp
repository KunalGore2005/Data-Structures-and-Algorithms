#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int y,r;
        cin>>y>>r;
        int result=min(n,r+(y/2));
        cout<<result<<endl;
    }
    return 0;
}