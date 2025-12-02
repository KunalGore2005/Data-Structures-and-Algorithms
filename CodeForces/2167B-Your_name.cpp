#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string p,q;
        cin>>p>>q;
        sort(p.begin(),p.end());
        sort(q.begin(),q.end());
        if(p==q)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}