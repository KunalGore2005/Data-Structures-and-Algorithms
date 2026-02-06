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
        if(n%2==0){
            bool isSquare=true;
            for(int i=0;i<n/2;i++){
                if(s[i]!=s[n/2+i]){
                    isSquare=false;
                    break;
                }
            }
            if(isSquare) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}