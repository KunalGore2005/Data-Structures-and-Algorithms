#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int l=0,r=0;
        for(int i=0;i<n/2;i++){
            l+=s[i]-'0';
        }
        for(int i=n/2;i<n;i++){
            r+=s[i]-'0';
        }
        if(l==r) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}