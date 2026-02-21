#include<iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        string s;
        cin>>s;
        int n = s.length();
        int ones = 0;
        for (char c : s) if (c=='1') ones++;
        int zeros=n-ones;
        vector<int>ops;
        if(ones%2==0) {
            for(int i=0;i<n;i++) if(s[i]=='1') ops.push_back(i+1);
            cout<<ops.size()<<endl;
        }
        else if (zeros%2==1) {
            for(int i=0;i<n;i++) if(s[i]=='0') ops.push_back(i+1);
            cout<<ops.size()<<endl;
        }
        else {
            cout<<-1<<endl;
        }
        for(int idx:ops)cout<<idx<<" ";
        cout<<endl;
    }
    return 0;
}