#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string res="";
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]>='0' && s[i]<='9'){
            res+=s[i];
        }
    }
    sort(res.begin(),res.end());
    for(int i=0;i<res.length();i++){
        cout<<res[i];
        if(i!=res.length()-1){
            cout<<"+";
        }
    }
    return 0;
}