#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string x="",y="";
        for(int i=0;i<n;i++){
            char c;
            cin>>c;
            if(c=='B' || c=='G') x+='0';
            else x+='1';
        }
        for(int i=0;i<n;i++){
            char c;
            cin>>c;
            if(c=='B' || c=='G') y+='0';
            else y+='1';
        }
        if(x==y) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}